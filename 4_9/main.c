#include <stdio.h>

int main()
{
    float promet, plata;
    printf("Vnesi promet vo evra (-1 za kraj):\n");
    scanf("%f", &promet);
    while(promet!=-1){
        plata=200+promet*0.09;
        printf("Platata e: %.2f\n", plata);
        printf("Vnesi promet vo evra (-1 za kraj):\n");
        scanf("%f", &promet);
    }
    return 0;
}
