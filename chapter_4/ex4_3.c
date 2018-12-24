#include <stdio.h>
#define rozmiar 30
char napis[rozmiar];
long liczba;

int main(){
    printf("Wpisz dowolna liczbe 9-cyfrowa: ");
    scanf("%ld", &liczba);
    printf("Wpisales liczbe: %ld\n", liczba);
    return 0;
}