#include <stdio.h>
struct adres{
    char ulica[30];
    int nr_domu;
    char miasto[40];
};
struct data{
    int rok;
    char miesiac[20];
    char dzien[20];    
};
struct dane{
    char imie[20];
    char nazwisko[30];
    struct adres moj_adr;
    struct data u_data;
} MojeDane;

int main(){
    printf("Podaj imie: ");
    scanf("%s", MojeDane.imie);
    printf("Podaj nazwisko: ");
    scanf("%s", MojeDane.nazwisko);
    printf("Podaj adres: \n");
    printf("Ulica: ");
    scanf("%s", MojeDane.moj_adr.ulica);
    printf("Numer domu: ");
    scanf("%d", &MojeDane.moj_adr.nr_domu);
    printf("Miasto: ");
    scanf("%s", MojeDane.moj_adr.miasto);
    printf("Podaj date urodzenia: \n");
    printf("Rok: ");
    scanf("%d", &MojeDane.u_data.rok);
    printf("Miesiac slownie: ");
    scanf("%s", MojeDane.u_data.miesiac);
    printf("Dzien slownie: ");
    scanf("%s", MojeDane.u_data.dzien);

    printf("\n\nTwoje dane: ");
    printf("\n%s\n%s\n%s\n%d\n%s\n%d\n%s\n%s\n",
        MojeDane.imie, MojeDane.nazwisko,
        MojeDane.moj_adr.ulica, MojeDane.moj_adr.nr_domu, MojeDane.moj_adr.miasto,
        MojeDane.u_data.rok, MojeDane.u_data.miesiac, MojeDane.u_data.dzien);

    return 0;
}