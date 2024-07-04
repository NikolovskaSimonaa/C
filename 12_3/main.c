#include <stdio.h>

unsigned mnoziSoStepenOdDva(unsigned broj, int stepen){
    broj<<=stepen; //shift vo levo za kolku sto e vrednosta na stepenot
    return broj;
}

int main(){
    unsigned broj, rezultat;
    int stepen;
    printf("Vnesi broj:\n");
    scanf("%u", &broj);
    printf("Vnesi stepen:\n");
    scanf("%d", &stepen);
    rezultat=mnoziSoStepenOdDva(broj,stepen);
    printf("Rezultat: %u", rezultat);
    return 0;
}
