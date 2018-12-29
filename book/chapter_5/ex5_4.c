#include <stdio.h>
float mnozenie(float, float);
float dzielenie(float, float);
float dodawanie(float, float);
float odejmowanie(float, float);

int main(){    
    float x, y;
    float (*wsk_do_funkcji[])(float, float) = {dodawanie, odejmowanie, mnozenie, dzielenie};

    printf("Podaj dwie liczby: \n");
    scanf("%f", &x);
    scanf("%f", &y);

    for(int i = 0; i < 4; i++)
        printf("Wynik: %f\n", wsk_do_funkcji[i](x, y));
    return 0;
}

float mnozenie(float a, float b){
    printf("Mnozenie\n");
    return a*b;
}

float dzielenie(float a, float b){
    printf("Dzielenie\n");
    return a/b;
}

float dodawanie(float a, float b){
    printf("Dodawanie\n");
    return a+b;
}

float odejmowanie(float a, float b){
    printf("Odejmowanie\n");
    return a-b;
}