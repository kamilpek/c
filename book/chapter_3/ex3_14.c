#include <stdio.h>
char bufor1[100], bufor2[100];
char *funkcja(char x[], char y[]);

int main(){
    puts("Wpis pierwszy tekst: ");
    gets(bufor1);
    puts("Wpis drugi tekst: ");
    gets(bufor2);
    printf("Dluzszy lancuch znakow: %s\n", funkcja(bufor1, bufor2));
    return 0;
}

char *funkcja(char x[], char y[]){
    size_t a, b;
    a = strlen(x);
    b = strlen(y);
    if (a > b)
        return x;
    else
        return y;
}