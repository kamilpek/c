#include <stdio.h>
float srednia_ucznia, suma_sr, sr_klasy;
int n;
float JakaSrednia(float x, int y);

int main(){
  float uczniowie[21];
  suma_sr = 0;
  for(n = 0; n < 21; n++){
    printf("Podaj srednia ucznia numer %d: ", n);
    scanf("%f", &srednia_ucznia);
    uczniowie[n] = srednia_ucznia;
    suma_sr += uczniowie[n];
  }
  sr_klasy = JakaSrednia(suma_sr, n);
  printf("Srednia ocen Twojej klasy wynosi: %f", sr_klasy);
  return 0;
}

float JakaSrednia(float x, int y){
  float z = x/y;
  return z;
}
