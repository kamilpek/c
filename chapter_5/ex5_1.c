#include <stdio.h>
typedef struct {
    int x;
    int *y;
} struktura;

int main(){
    struktura *wsk_strukt;
    struktura strukt;
    int a = 10;
    int b = 20;
    strukt.x = a;
    strukt.y = &b;
    wsk_strukt = &strukt;
    printf("Wartosc pola x: %d\n", strukt.x);
    printf("Wartosc pola x odwolujac sie przez wskaznik: %d\n", wsk_strukt->x);
    printf("Wartosc wskazywana przez pole *y: %d\n", *(strukt.y));
    printf("Wartosc wskazywana przez pole *y przez wskaznik: %d\n", *(wsk_strukt->y));
    return 0;
}