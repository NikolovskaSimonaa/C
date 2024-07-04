#include <stdio.h>

int nzd(int a, int b){
    int nzd=1, i, pomal;
    if(a>b) pomal=b;
    else pomal=a;

    for(i=2;i<=pomal;i++){
        if(a%i==0 && b%i==0) nzd=i;
    }
    return nzd;
}

int main()
{
    int a, b;
    printf("Vnesi dva broja:\n");
    scanf("%d%d", &a, &b);
    printf("Najgolem zaednicki delitel: %d", nzd(a, b));
    return 0;
}


