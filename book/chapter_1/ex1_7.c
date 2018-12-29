#include <stdio.h>

double procent;
unsigned int MojWiek;
unsigned long odleglosc;
int temperatura = -5;
float cena_nawozu = 12.35;

int main(){
  procent = 0.00001;
  MojWiek = 24;
  odleglosc = 10000;

  printf("Nazywam się Zdzichu, mam %u lata, ", MojWiek);
  printf("chodzę do szkoły oddalonej od domu o %lu cm. ", odleglosc);
  printf("Na dworze panuje temperatura: %d stopni Celsjusza. ", temperatura);
  printf("Wydaje %f procent na pierdoły z dochodu, którym jest ", procent);
  printf("handel hurtowy nawozem w cenie %f.\n", cena_nawozu);

  return 0;
}
