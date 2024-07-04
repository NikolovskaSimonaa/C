#include <stdio.h>

void prevrtiBitovi(unsigned broj){
    int i;
    unsigned br_bitovi=sizeof(broj)*8;
    unsigned int prevrten=0;
    unsigned c;
    unsigned mask=1<<31;
    for(i=0;i<br_bitovi;i++){ //izmini gi site bitovi od brojot
        if((broj&(1<<i))) //sekoja iteracija stavi soodvetno maska na nareden bit
            prevrten|=1<<((br_bitovi-1)-i); //prevrtuvanje na pozicijata
    }
    printf("\nPosle promena brojot e %u = ", prevrten);
    for(c=1;c<=32;c++){
        putchar(prevrten&mask?'1':'0');
        prevrten<<=1;
        if(c%8==0)
            printf(" ");
    }
}

int main(){
    unsigned broj, c, br;
    unsigned mask=1<<31;
    printf("Vnesi broj\n");
    scanf("%u", &broj);
    printf("Pred promena brojot e: %u = ", broj);
    br=broj;
    for(c=1;c<=32;c++){
        putchar(br&mask?'1':'0');
        br<<=1;
        if(c%8==0)
            printf(" ");
    }
    prevrtiBitovi(broj);
    return 0;
}


