#include <stdio.h>
#define size 5
int tab1[size];
int tab2[size];
int counter;
int sum(int x[], int y[], int z);

int main(){
  for(counter = 0; counter < size; counter++){
    printf("Podaj wartosc %d-ego elementu pierwszej tablicy: ", counter);
    scanf("%d", &tab1[counter]);
    printf("Podaj wartosc %d-ego elementu drugiej tablicy: ", counter);
    scanf("%d", &tab2[counter]);
  }
  printf("Suma wszystkich elementów obu tablic: %d\n", sum(tab1, tab2, size));
  return 0;
}

int sum(int x[], int y[], int z){
  int count;
  int summ = 0;
  for(count = 0; count < z; count++)
    summ += x[count] + y[count];
  return summ;
} 
