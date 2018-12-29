#include <stdio.h>
int licznik;

int main(){
  licznik = 25;
  while(licznik <= 200){
    printf("Licznik: %d \n", licznik);
    licznik++;
  }
  return 0;
}
