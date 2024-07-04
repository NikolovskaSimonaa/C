#include <stdio.h>

int main()
{
    int sum=0,n;
    char c;
    printf("Vnesi broj:\n");
    scanf("%d", &n);
    sum+=n;
    fflush(stdin);
    printf("Ushte? (d/n):\n");
    scanf("%c", &c);
    while(c!='n'){
        printf("Vnesi broj:\n");
        scanf("%d", &n);
        sum+=n;
        fflush(stdin);
        printf("Ushte? (d/n):\n");
        scanf("%c", &c);
    }
    printf("Sumata e: %d\n", sum);

    return 0;
}
