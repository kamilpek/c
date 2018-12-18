#include <stdio.h>
int tablica[40];
int licznik;

int main(){
  for(licznik = 0; licznik < 40; licznik++)
    tablica[licznik] = 0;
  printf("Tablica zostala wyzerowana.\n");
  printf("Indeks numer 2: %d\n", tablica[2]);
  return 0;
}
