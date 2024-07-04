#include <stdio.h>

int main()
{
    int n, i, j, sum;
    printf("Vnesi broj:\n");
    scanf("%d", &n);
    printf("Sovrseni broevi pomali od %d se: ", n);
    for(i=2;i<=n;i++){ // 1 ne e sovrsen broj, go preskoknuvame
        sum=0;
        for(j=1;j<=i/2;j++){ //sobiranje na delitelite na brojot
            if(i%j==0)
                sum=sum+j;
        }
        if(i==sum)
            printf("%d ,", i);
    }
    return 0;
}
