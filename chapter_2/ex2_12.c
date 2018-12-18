#include <stdio.h>
int wartosc;

int main(){
  printf("Wpisz wartosc od 1 do 3: ");
  scanf("%d", &wartosc);
  switch(wartosc){
    case 1: {
      printf("Wpisales 1\n");
      break;
    }
    case 2: {
      printf("Wpisales 2\n");
      break;
    }
    case 3: {
      printf("Wpisales 3\n");
      break;
    }
    default: {
      printf("Źle\n");
    }
  }
  return 0;
}
