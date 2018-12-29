#include <stdio.h>
int tablica[20];
int *wskaznik;

int main(){
  tablica[0] = 5;
  wskaznik = tablica;
  printf("1. element tablicy ma wartosc: %d\n", *wskaznik);  
  return 0;
}
