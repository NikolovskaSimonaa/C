#include <stdio.h>

int main(){
    float temperatura[31];
    int mesec, br_denovi, i;
    float sum=0.0;

    printf("Vnesi broj na mesec:\n");
    scanf("%d", &mesec);

    br_denovi=31;
    if(mesec==2) br_denovi=28;
    if(mesec==4 || mesec==6 || mesec==9 || mesec==11) br_denovi=30;

    for(i=0;i<br_denovi;i++){
        printf("Vnesi ja temperaturata za den %d:\n", i+1);
        scanf("%f", &temperatura[i]);
        sum=sum+temperatura[i];
    }
    printf("Sredna mesecna temperatura:%.2f\n", sum/br_denovi);
    return 0;
}
