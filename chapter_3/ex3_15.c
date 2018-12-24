#include <stdio.h>
int wartosc(int x);
void wskaznik(int *x);

int main(){
    int x = 1;
    int y;

    y = wartosc(x);
    printf("Wartosc x po wywolaniu funkcji wartosc %d\n", x);

    wskaznik(&x);
    printf("Wartosc x po wywolaniu funkcji wskaznik: %d\n", x);

    return 0;
}

int wartosc(int x){
    x++;
    return x;
}

void wskaznik(int *x){
    (*x)++;
}