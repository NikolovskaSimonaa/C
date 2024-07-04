#include <stdio.h>

int main()
{
    int n, sprotiven=0;
    printf("Vnesi priroden broj n:\n");
    scanf("%d", &n);
    while(n>0){
        sprotiven=sprotiven*10+n%10;
        n/=10;
    }
    printf("Negov sprotiven broj e: %d\n", sprotiven);
    return 0;
}
