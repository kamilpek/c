#include <stdio.h>
#include <string.h>
void odwrocenie_tab(char *s);

int main(){
    char ciag_znakow[20] = "Ikar lapal raki";
    odwrocenie_tab(ciag_znakow);
    printf("Ciag znakow po odworceniu: %s\n", ciag_znakow);
    return 0;
}

void odwrocenie_tab(char *s){
    int i, j;
    char temp;
    j = strlen(s) - 1;

    for(i = 0; i < j; j--, i++){
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}