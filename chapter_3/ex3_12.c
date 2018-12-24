#include <stdio.h>
char napis[100];
int licznik;

int main(){
    puts("Podaj napis, ktory bedzie wysietlony piec razy:");
    gets(napis);

    for (licznik = 0; licznik < 5; licznik++){
        puts(napis);
    }

    return 0;
}