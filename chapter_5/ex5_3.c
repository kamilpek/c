#include <stdio.h>
void handler1(float);
void handler2(float);
void przekroczony_poziom(float, void (*handler)(float));

int main(){
    float pomiar = 123.45;
    void (*wsk_do_obslugi)(float);
    wsk_do_obslugi = handler1;
    przekroczony_poziom(pomiar, wsk_do_obslugi);
    wsk_do_obslugi = handler2;
    przekroczony_poziom(pomiar, wsk_do_obslugi);
    return 0;
}

void przekroczony_poziom(float pomiar, void (*handler)(float x)){
    printf("Wskazanie czujnika podejrzane, uruchamiam oblsuge zdarzenia \n");
    handler(pomiar);
}

void handler1(float x){
    if(x < 100)
        printf("Wskazanie czujnika w granicach normy.\n");
    else
        printf("Wystapila awaria, wymagana reakcja.\n");
}

void handler2(float x){
    if(x < 200)
        printf("Wskazanie czujnika w granicach normy.\n");
    else
        printf("Wystapila awaria, wymagana reakcja.\n");
}