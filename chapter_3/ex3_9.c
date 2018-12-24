#include <stdlib.h>
#include <stdio.h>

int main(){
    int *tablica;

    if((tablica = (int *)malloc(50*sizeof(int))) == NULL){
        printf("Za malo pamieci!!\n");
        exit(1);
    }
    printf("Pamiec zostala przydzielona!!\n");

    return 0;
}