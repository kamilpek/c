#include <stdio.h>
#include <string.h>
char zrodlo[] = "To jest lancuch zrodlowy";
char docel[10];

int main(){
    printf("Lancuch zrodlowy: %s\n", zrodlo);
    strncpy(docel, zrodlo, 5);
    printf("Skopiowano znaki: %s\n", docel);
    return 0;
}
