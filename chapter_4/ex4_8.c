#include <stdio.h>
#include <string.h>
char lancuch1[50] = "Pierwszy lancuch ";
char lancuch2[] = "Drugi lancuch";

int main(){
    printf("Pierwszy lancuch: %s\n", lancuch1);
    printf("Drugi lancuch: %s\n", lancuch2);
    strcat(lancuch1, lancuch2);
    printf("Wynik dzialania programu: %s\n", lancuch1);
    return 0;    
}