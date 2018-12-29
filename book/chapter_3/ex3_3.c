#include <stdio.h>
int x;
int *y;

int main(){
  x = 180;
  y = &x;

  printf("Wartosc x: %d\n", x);
  printf("Wartosc x wg y: %d\n", *y);
  printf("Adres x: %p\n", &x);
  printf("Adres x wg y: %p\n", y);

  return 0;
}
