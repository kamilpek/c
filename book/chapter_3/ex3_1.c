#include <stdio.h>
float szkola[4][5];
int x, y;

int main(){
  for(x = 0; x < 4; x++){
    for(y = 0; y < 5; y++){
      printf("Wpisz srednia ocen %d-ego ucznia %d-ej klasy: ", x+1, y+1);
      scanf("%f", &szkola[x][y]);
    }
  }
  printf("\n");
  for(x = 0; x < 4; x++){
    for(y = 0; y < 5; y++){
      printf("Srednia ocen %d-ego ucznia z %d-ej klasy ", x+1, y+1);
      printf("wynosi: %f.\n", szkola[x][y]);
    }
  }
  return 0;
}
