#include <stdio.h>

int main(){
    FILE *plik;
    char c;
    if((plik = fopen("plik.txt", "r")) != NULL){
        while((c = fgetc(plik)) != EOF)
            printf("%c", c);
    }
    else
        return -1;
    fclose(plik);
    return 0;
}