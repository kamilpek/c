#include <stdio.h>
#include <string.h>
void odwrocenie(char *s);

int main(){
    char ciag_znakow[20] = "Ikar lapal raki";
    odwrocenie(ciag_znakow);
    printf("Ciag znakow po odwroceniu: %s\n", ciag_znakow);
    return 0;
}

void odwrocenie(char *s){
    char *wsk = s + strlen(s) - 1;
    char temp;
    for(; wsk > s; wsk--, s++){
        temp = *s;
        *s = *wsk;
        *wsk = temp;
    }
}
