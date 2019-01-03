#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void losujDateUrodzin(int *PESEL){
    int plec = rand() % 10;
    int rok = rand() % (2299 - 1800) + 1800;    
    int dzien = rand() % (29 - 1) + 1;    
    int miesiac = rand() % (12 - 1) + 1;
    int miesiac_pesel = miesiac;
    if((rok > 1800) && (rok < 1899))
        miesiac_pesel = miesiac + 80;
    if((rok > 2000) && (rok < 2099))
        miesiac_pesel = miesiac + 20;
    if((rok > 2100) && (rok < 2199))
        miesiac_pesel = miesiac + 40;
    if((rok > 2200) && (rok < 2299))
        miesiac_pesel = miesiac + 60;

    PESEL[0] = (rok % 100) / 10;
    PESEL[1] = (rok % 100) % 10;
    PESEL[2] = miesiac_pesel / 10;
    PESEL[3] = miesiac_pesel % 10;
    PESEL[4] = dzien / 10;
    PESEL[5] = dzien % 10;
    PESEL[9] = plec;
}

void losujSerie(int *PESEL){
    int seria = rand() % (999 - 100) + 100;
    PESEL[6] = seria / 100;
    PESEL[7] = (seria % 100) / 10;
    PESEL[8] = (seria % 100) % 10;
}

void generujLiczbeKontrolna(int *PESEL){
    int a, b, c, d, e, f, g, h, i, j;
    a = 1 * PESEL[0];
    b = 3 * PESEL[1];
    c = 7 * PESEL[2];
    d = 9 * PESEL[3];
    e = 1 * PESEL[4];
    f = 3 * PESEL[5];
    g = 7 * PESEL[6];
    h = 9 * PESEL[7];
    i = 1 * PESEL[8];
    j = 3 * PESEL[9];
    int liczbaKontrolna = a + b + c + d + e + f + g + h + i + j;
    PESEL[10] =  (10 - (liczbaKontrolna % 10)) % 10;
}

int main(int argc, char* argv[]){    
    if(argc != 2){
        printf("Prosze podac ilosc peseli do wygenerowania wedlug: nazwa ilosc\n");
        return -1;
    }

    srand(time(0));
    int PESEL[11];    
    int ilosc = strtol(argv[1], NULL, 10);    
    for(int i = 0; i < ilosc; i++){
        losujDateUrodzin(PESEL);
        losujSerie(PESEL);
        generujLiczbeKontrolna(PESEL);
        printf("%d%d%d%d%d%d%d%d%d%d%d\n", 
        PESEL[0], PESEL[1], PESEL[2], PESEL[3], PESEL[4], PESEL[5], 
        PESEL[6], PESEL[7], PESEL[8], PESEL[9], PESEL[10]);
    }

    return 0;
}