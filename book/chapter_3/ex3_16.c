#include <stdio.h>

int main(){
    int *kontener;
    int n;

    printf("Podaj ilosc materialu: ");
    scanf("%d", &n);
    
    if(kontener = (int *)malloc(sizeof(int)*n))
        printf("Przygotowalem kontener o wielkosci %d\n", n);
    else
        printf("Nie mam takiego kontenera\n");
    
    free(kontener);
    return 0;
}