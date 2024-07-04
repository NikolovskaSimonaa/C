#include <stdio.h>

int main()
{
    int sum=0, n;
    printf("Vnesi broj, za kraj vnesi -1:\n");
    scanf("%d", &n);
    while(n!=-1){
        sum+=n;
        printf("Vnesi broj, za kraj vnesi -1:\n");
        scanf("%d", &n);
    }
    printf("Sumata na broevite e: %d\n", sum);
    return 0;
}
