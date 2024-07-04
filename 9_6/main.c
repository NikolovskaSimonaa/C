#include <stdio.h>

int main()
{
    int n, i, sum=0, br, cifra;
    printf("Vnesi broj:\n");
    scanf("%d", &n);
    printf("Broevi pomali od %d cij zbir na kubovite na cifrite e ednakov na samiot broj se:\n", n);
    for(i=1;i<n;i++){
        sum=0;
        br=i;
        while(br>0){
            cifra=br%10;
            sum=sum+cifra*cifra*cifra;
            br/=10;
        }
        if(sum==i)
            printf("%d ,", i);
    }
    return 0;
}
