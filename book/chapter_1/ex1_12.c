#include <stdio.h>
#define PrzedzialCzasu 480
#define ile_mies_w_roku 12

int main(){
  int wiek;
  int obliczonyWiek;
  int ileLat;

  ileLat = PrzedzialCzasu/ile_mies_w_roku;
  scanf("%d", &wiek);
  obliczonyWiek = wiek + ileLat;
  printf("Za %d miesiecy, czyli %d lat, ", PrzedzialCzasu, ileLat);
  printf("bedziesz mial %d lat\n", obliczonyWiek);
  
  return 0;
}
