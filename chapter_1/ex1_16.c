#include <stdio.h>
int a, b, c, d;

int main(){
  printf("Podaj pierwsza liczbe: \n");
  scanf("%d", &a);
  printf("Podaj druga liczbe: \n");
  scanf("%d", &b);
  printf("Podaj trzecia liczbe: \n");
  scanf("%d", &c);

  if (a > c && b > a){
    d = a * b * c;
    printf("Dokonano mnożenia wartosci ");
    printf("trzech zmiennych, iloczyn: %d\n", d);
  }
  if (b < c || b < a){
    d = b / a;
    printf("Dokonano dzielenia wartosci ");
    printf("zmiennej b przez a, iloraz: %d\n", d);
  }
  if ((c > a && b != 5) || (b > c && a != 0)){
    d = a + b + c;
    printf("Dodano wartosci wszystkich trzech zmiennych, ");
    printf("suma: %d\n", d);
  }

  return 0;
}
