#include <stdio.h>

int main()
{
    int proizvod_br, prodadeni_proizvodi,i=0;
    float sum=0.0;
    int kolku1, kolku2, kolku3, kolku4, kolku5; //kolku pati bil kupen sekoj od proizvodite soodvetno
    kolku1=kolku2=kolku3=kolku4=kolku5=0;

    printf("Vnesi kolku proizvodi bile prodadeni vo tekot na denot:\n");
    scanf("%d", &prodadeni_proizvodi);
    while(i<prodadeni_proizvodi){
        printf("Vnesi go brojot na prodadeniot proizvod\n");
        scanf("%d", &proizvod_br);
        switch(proizvod_br){
        case 1:
            kolku1++;
            sum+=50.5;
            break;
        case 2:
            kolku2++;
            sum+=45.6;
            break;
        case 3:
            kolku3++;
            sum+=32.8;
            break;
        case 4:
            kolku4++;
            sum+=65.3;
            break;
        case 5:
            kolku5++;
            sum+=20.0;
            break;
        default:
            printf("Proizvodot ne postoi.\n");
            break;
        }
        i++;
    }

    printf("Vkupna prodadena vrednost od proizvod 1: %f\n", kolku1*50.5);
    printf("Vkupna prodadena vrednost od proizvod 2: %f\n", kolku2*45.6);
    printf("Vkupna prodadena vrednost od proizvod 3: %f\n", kolku3*32.8);
    printf("Vkupna prodadena vrednost od proizvod 4: %f\n", kolku4*65.3);
    printf("Vkupna prodadena vrednost od proizvod 5: %f\n", kolku5*20.0);

    printf("Vkupniot broj prodadeni proizvodi e %d, so vkupna vrednost: %f\n", prodadeni_proizvodi, sum);
    return 0;
}
