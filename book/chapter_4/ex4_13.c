#include <stdio.h>

int main(){
    FILE *plik;
    if ((plik = fopen("plik.txt", "w")) != NULL){
        for(int i = 0; i <= 10; i++)
            if(fprintf(plik, "%d\n", i) < 0)
                return -1;
    }
    else 
        return -1;
    fclose(plik);
    return 0;
}