#include <stdio.h>
#include <stdlib.h>
struct wagon{
    struct wagon *nastepny;
    int *miejsca;    
};
typedef struct wagon wagon_PKP;

int main(){
    wagon_PKP *lokomotywa, *wars, *wagon1, *wagon2;
    lokomotywa = (wagon_PKP *)malloc(sizeof(wagon_PKP));
    wars = (wagon_PKP *)malloc(sizeof(wagon_PKP));
    wagon1 = (wagon_PKP *)malloc(sizeof(wagon_PKP));
    wagon2 = (wagon_PKP *)malloc(sizeof(wagon_PKP));
    if (!(wars && lokomotywa && wagon1 && wagon2)) return -1;
    lokomotywa -> nastepny = NULL;
    lokomotywa -> miejsca = NULL;
    wars -> nastepny = lokomotywa;
    wars -> miejsca = (int *)malloc(20*sizeof(int));
    wagon1 -> nastepny = wars;
    wagon1 -> miejsca = (int *)malloc(60*sizeof(int));
    wagon2 -> nastepny = wagon1;
    wagon2 -> miejsca = (int *)malloc(60*sizeof(int));
    printf("Usuwamy wagon1 i podpinamy wagon2 do wagonu WARS\n");
    wagon2 -> nastepny = wars;
    free(wagon1);
    return 0;    
}