#include <stdio.h>

int paren(int a){
    if(a%2==0) return 1;
    else return 0;
}

int main()
{
    int i, n;
    for(i=0;i<10;i++){
        printf("Vnesi cel broj:\n");
        scanf("%d", &n);
        if(paren(n)==1) printf("Brojot %d e paren\n", n);
        else printf("Brojot %d e neparen\n", n);
    }
    return 0;
}
