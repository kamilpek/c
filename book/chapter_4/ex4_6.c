#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char zrodlo[] = "Nasz lanuch znakow";
char docel1[30];
char *docel2;

int main(){
    printf("Lanuch zrodlowy: %s\n", zrodlo);
    strcpy(docel1, zrodlo);
    printf("Pierwszy lancuch po kopiowaniu: %s\n", docel1);
    docel2 = (char *)malloc(strlen(zrodlo)+1);
    strcpy(docel2, zrodlo);
    printf("Drugi lancuch po kopiowaniu: %s\n", docel2);
    return 0;
}