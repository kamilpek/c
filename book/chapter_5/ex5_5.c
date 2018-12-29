#include <stdio.h>
#include <stdlib.h>
#define NEWINT(n) ((int *)malloc(sizeof(int)*(n)))

int main(){
    int *tablica;
    if (tablica = NEWINT(10))
        printf("Pomyslnie zaalokowano pamiec\n");
    else
        return -1;
    return 0;
}