#include <stdio.h>
int moj_strlen( char *s);

int main(){
    char str[500];
    printf("Podaj lancuch znakow: ");
    scanf("%s", str);
    printf("\nDlugosc lanucha znakow: %d.\n", moj_strlen(str));    
    return 0;
}

int moj_strlen(char *s){
    int i = 0;
    while (*s != '\0'){
        s++;
        i++;
    }
    return i;
}