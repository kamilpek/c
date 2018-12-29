#include <stdio.h>
long funkcja(int x, int y);
int a, b;
long wynik;

int main(){
  printf("Podaj pierwsza liczbe: \n");
  scanf("%d", &a);
  printf("Podaj druga liczbe: \n");
  scanf("%d", &b);

  wynik = funkcja(a, b);
  printf("Iloczyn dwóch liczb: %ld\n", wynik);

  return 0;
}

long funkcja(int x, int y){
  long z = x * y;
  return z;
}
