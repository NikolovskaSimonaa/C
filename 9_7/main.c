#include <stdio.h>

int sprotiven(int n){
    int sprotiven=0;
    while(n>0){
        sprotiven=sprotiven*10+n%10;
        n/=10;
    }
    return sprotiven;
}

int main()
{
    int n1, n2;
    printf("Vnesi go intervalot:\n");
    scanf("%d%d", &n1, &n2);
    printf("Broevi vo interval [%d, %d] koi se delivi so svojot sprotiven broj se: ", n1, n2);
    while(n2>=n1){
        if(n1%sprotiven(n1)==0)
            printf("%d ,", n1);
        n1++;
    }
    return 0;
}
