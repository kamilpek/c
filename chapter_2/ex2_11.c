#include <stdio.h>
unsigned int liczba;
unsigned long suma;

int main(){
  for(;;){
    printf("Podaj dodatnia liczbe z zakresu 2 - 65535, wpisz 1, aby zakonczyc\n");
    scanf("%u", &liczba);
    if(liczba == 1)
      break;
    else
      suma += liczba;
  }
  printf("Suma wszystkich wpisanych liczb wynosi: %lu\n", suma);
  return 0;
}
