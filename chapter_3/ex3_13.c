#include <stdio.h>
char napis[100];
int licznik;

int main(){
    printf("Podaj napis, ktory bedzie wysietlony piec razy:\n");
    scanf("%s", napis);

    for(licznik = 0; licznik < 5; licznik++){
        printf("%s\n", napis);
    }

    return 0;    
}