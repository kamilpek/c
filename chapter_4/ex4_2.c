#include <stdio.h>
int liczba1, liczba2;
char napis[30];

int main(){
    printf("Wpisz 5-cyfrową liczbe: ");
    scanf("%3d%2d", &liczba1, &liczba2); // <-- szerokosc pola, zapisywanie do rozych zmiennych
    printf("Wpisales liczby %d i %d.\n", liczba1, liczba2);
    return 0;
}