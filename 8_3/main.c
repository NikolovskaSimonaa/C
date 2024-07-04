#include <stdio.h>

#define max 100 //neka maksimalniot broj an elementi vo nizata e 100

int palindrom(char niza[]){
    int kolku=0,i,j;
    while(niza[kolku]!='\0') kolku++; // broenje kolku karakteri ima stringot

    for(i=0,j=kolku-1;i<kolku/2;i++,j--){
        if(niza[i]!=niza[j]) return 0;
    }
    return 1;
}

int main()
{
    char niza[100];
    printf("Vnesi niza od karakteri: \n");
    scanf("%s", niza);

    if(palindrom(niza)==1) printf("Stringot e palindrom.\n");
    else printf("Stringot ne e palindrom.\n");
    return 0;
}
