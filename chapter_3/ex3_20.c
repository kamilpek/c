#include <stdio.h>
struct wiek_kota {
    int bury_kot;
    int krasy_kot;
    int kot_odmieniec;
} koci_wiek, ludzki_wiek;

int main(){
    koci_wiek.bury_kot = 3;
    koci_wiek.krasy_kot = 4;
    koci_wiek.kot_odmieniec = 5;
    ludzki_wiek.bury_kot = 30;
    ludzki_wiek.krasy_kot = 40;
    ludzki_wiek.kot_odmieniec = 50;

    printf("Bury kot ma %d lat, ale po kociemu ma %d.\n", ludzki_wiek.bury_kot, koci_wiek.bury_kot);
    printf("Krasy kot ma %d lat, ale po kociemu ma %d.\n", ludzki_wiek.krasy_kot, koci_wiek.krasy_kot);
    printf("Kot odmieniec ma %d lat, ale po kociemu ma %d.\n", ludzki_wiek.kot_odmieniec, koci_wiek.kot_odmieniec);
    
    return 0;
}