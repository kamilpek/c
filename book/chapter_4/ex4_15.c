#include <stdio.h>

int main(int argc, char* argv[]){
    FILE *plik_zrodlowy, *plik_docelowy;
    char lancuch[80];
    if(argc != 3){
        printf("Uruchomienie pogramu: nazwa zrodlo cel.\n");
        return -1;
    }
    if ((plik_zrodlowy = fopen(argv[1], "r")) == NULL)
        return -1;
    if ((plik_docelowy = fopen(argv[2], "w")) == NULL)
        return -1;
    while(fgets(lancuch, sizeof(lancuch), plik_zrodlowy) != NULL)
        fputs(lancuch, plik_docelowy);
    return 0;
}