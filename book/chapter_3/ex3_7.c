#include <stdio.h>
#define MAX 256
unsigned char licznik;

int main(){
    for(licznik = 0; licznik < MAX; licznik++){
        printf("Kod ASCII: %d \t Znak: %c\n", licznik, licznik);
    }
    return 0;
}