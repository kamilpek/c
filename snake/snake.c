#include <ncurses.h>
#include <unistd.h>
#include <sys/select.h>
#include <stdlib.h>
#include <time.h>

#define MAXSZER 80
#define MAXWYS 25

// sprawdzamy czy uzyto klawiatury
int uzytoKlawiatury(void) {
    struct timeval tv;
    fd_set read_fd;

    tv.tv_sec = 0;
    tv.tv_usec = 0;
    FD_ZERO(&read_fd);
    FD_SET(0, &read_fd);

    if(select(1, &read_fd, NULL, NULL, &tv) == -1)
        return 0;

    if(FD_ISSET(0, &read_fd))
        return 1;

    return 0;
}

// ruch weza o okreslony odcinek ze wszkana predkoscia
int ruchWeza(int *wazX, int *wazY, int kierX, int kierY, int predkosc){
    int x = *wazX + kierX;
    int y = *wazY + kierY;
    *wazX = x;
    *wazY = y;
    mvprintw(*wazY, *wazX, "*");
    usleep(100000 * predkosc);
}

// sprawdzamy czy waz nie dotarl do sciany
int uderzylSciane(int wazX, int wazY){
    if(wazX < 0 || wazX > MAXSZER + 1)
        return 1;
    else if (wazY < 0 || wazY > MAXWYS + 1)
        return 1;
    else
        return 0;
}

// losowanie nowego miejsca dla zjedzonego jablka
int losujJablko(int *jablkoX, int *jablkoY, int *jablkoZjedzone){
    if (*jablkoZjedzone){
        srand(time(0));
        *jablkoX = (rand() % MAXSZER + 1);
        *jablkoY = (rand() % MAXWYS + 1);
        *jablkoZjedzone = 0;
    }
    mvprintw(*jablkoY, *jablkoX, "O");
}

// inkrementacja wyniku po zjedzeniu jablka
int zjedzJablko(int wazX, int wazY, int jablkoX, int jablkoY, int *jablkoZjedzone, int *wynik){
    if(wazX == jablkoX && wazY == jablkoY){
        *jablkoZjedzone = 1;
        *wynik += 1;
    }
    mvprintw(MAXWYS+3, (MAXSZER/2)-14, "wynik: %d - ctrl+c aby wyjsc", *wynik);
}

int main(){
    int wazX = 79;
    int wazY = 1;
    int klawiszWcisniety = 0;
    int kierunekX = -1;
    int kierunekY = 0;
    int predkosc = 1;
    int jablkoX = 0;
    int jablkoY = 0;
    int jablkoZjedzone = 1;
    int wynik = 0;

    initscr();
    curs_set(false);
    noecho();

    while(!uderzylSciane(wazX, wazY)){
        erase();

        losujJablko(&jablkoX, &jablkoY, &jablkoZjedzone);
        ruchWeza(&wazX, &wazY, kierunekX, kierunekY, predkosc);
        zjedzJablko(wazX, wazY, jablkoX, jablkoY, &jablkoZjedzone, &wynik);

        refresh();

        if(uzytoKlawiatury()){
            klawiszWcisniety = getch();

            if(klawiszWcisniety == 'w'){
                kierunekX = 0;
                kierunekY = -1;
            }
            if(klawiszWcisniety == 's'){
                kierunekX = 0;
                kierunekY = 1;
            }
            if(klawiszWcisniety == 'a'){
                kierunekX = -1;
                kierunekY = 0;
            }
            if(klawiszWcisniety == 'd'){
                kierunekX = 1;
                kierunekY = 0;
            }
        }
    }

    mvprintw(12, 30, "-- GAME OVER ---");
    getch();
    endwin();

    return 0;
}