#include <stdio.h>
char *zdanie = "Ale piekne zdanie";
int licznik;

int main(){
    for (licznik = 0; licznik < 10; licznik++){
        printf("%s\n", zdanie);
    }
    return 0;
}