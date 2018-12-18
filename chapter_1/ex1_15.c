#include <stdio.h>
int x,y,z;

int main(){
  printf("Podaj pierwsza liczbe: \n");
  scanf("%d", &x);
  printf("Podaj druga liczbe: \n");
  scanf("%d", &y);

  if (x != y)
    printf("\nObliczono sume: %d\n", z = x + y);
  else
    printf("\nObliczono iloraz: %d\n", z = x / y);

  return 0;
}
