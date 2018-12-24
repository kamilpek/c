#include <stdio.h>
#include <stdlib.h>

int main(){
    char *lancuch;

    if((lancuch = (char *) malloc(200)) == NULL){
        printf("Za malo pamieci!!\n");
        exit(1);
    }
    printf("Przedzielenie pamieci sie powiodlo!!\n");

    return 0;
}