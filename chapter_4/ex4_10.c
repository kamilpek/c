#include <stdio.h>

int main(){
    FILE *plik;
    int a;
    float b;
    if((plik = fopen("plik.txt", "r")) != NULL){
        while(fscanf(plik, "%d %f", &a, &b) == 2)
            printf("%d %f ", a, b);
    }
    else
        return -1;
    fclose(plik);
    return 0;
}