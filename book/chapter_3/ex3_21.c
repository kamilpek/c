#include <stdio.h>
#include <string.h>
struct data{
    char dzien[20];
    char miesiac[20];
    int rok;
} d_data;

int main(){
    strcpy(d_data.dzien, "niedziela");
    strcpy(d_data.miesiac, "grudzien");
    d_data.rok = 2018;
    printf("%s, %s, %d\n", d_data.dzien, d_data.miesiac, d_data.rok);
    return 0;
}
