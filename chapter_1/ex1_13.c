#include <stdio.h>

int x, y;

int main(){
  printf("Podaj pierwsza liczbe: \n");
  scanf("%d", &x);
  printf("Podaj druga liczbe: \n");
  scanf("%d", &y);

  if (x>y)
    printf("Liczba %d jest wieksza\n.", x);
  else {
    printf("Liczba %d jest wieksza lub rowna liczbe %d.\n", y, x);
  }

  return 0;
}
