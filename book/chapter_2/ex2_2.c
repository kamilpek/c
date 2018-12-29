#include <stdio.h>
void funkcja(int x);
int liczba;

int main(){
  printf("Podaj liczbe: \n");
  scanf("%d", &liczba);
  funkcja(liczba);
  return 0;
}

void funkcja(int x){
  if(x < 20)
    printf("Liczba jest mniejsza od 20.\n");
  else if (x == 20)
    printf("Liczba jest rowna 20.\n");
  else
    printf("Liczba wieksza od 20.\n");
}
