#include <stdio.h>
#include <string.h>
char lancuch1[30] = "Pierwszy lancuch ";
char lancuch2[] = "Drugi lancuch";

int main(){
    printf("Pierwszy lancuch: %s\n", lancuch1);
    printf("Drugi lancuch: %s\n", lancuch2);
    strncat(lancuch1, lancuch2, 5);
    printf("Wynik dzialania programu: %s\n", lancuch1);
    return 0;
}

