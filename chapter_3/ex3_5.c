#include <stdio.h>
#define size 20
int tab[size];
int counter;
int max(int x[], int y);

int main(){
  for(counter = 0; counter < size; counter++){
    printf("Podaj wartosc z zakresu -32000 - 32000: ");
    scanf("%d", &tab[counter]);
  }
  printf("Najwieksza wartosc: %d\n", max(tab, size));
  return 0;
}

int max(int x[], int y){
  int count;
  int maximum = -32000;
  for(count = 0; count < y; count++){
    if(x[count] > maximum)
      maximum = x[count];
  }
  return maximum;
}
