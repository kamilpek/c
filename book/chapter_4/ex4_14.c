#include <stdio.h>

int main(int argc, char* argv[]){
    FILE *plik_zrodlowy, *plik_docelowy;
    int znak;
    if(argc != 3){
        printf("Uruchomienie programu: nazwa zrodlo cel\n");
        return -1;
    }
    if((plik_zrodlowy = fopen(argv[1], "r")) == NULL){
        return -1;
    }
    if((plik_docelowy = fopen(argv[2], "w")) == NULL){
        return -1;
    }
    while((znak = fgetc(plik_zrodlowy)) != EOF)
        fputc(znak, plik_docelowy);
    fclose(plik_zrodlowy);
    fclose(plik_docelowy);
    return 0;
}