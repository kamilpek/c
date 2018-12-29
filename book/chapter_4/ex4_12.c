#include <stdio.h>

int main(){
    FILE *plik;
    char lancuch[80];
    if((plik = fopen("plik.txt", "r")) != NULL){
        while(fgets(lancuch, sizeof(lancuch), plik) != NULL)
            printf("%s", lancuch);
    }
    else
        return -1;
    fclose(plik);
    return 0;
}