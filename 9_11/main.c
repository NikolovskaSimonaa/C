#include <stdio.h>

#define max 100

int main()
{
    int niza[max];
    int n,i;
    printf("Vnesi ja dolzinata na nizata:\n");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("Vnesi sleden element:\n");
        scanf("%d", &niza[i]);
    }
    for(i=1;i<n;i++){
        if(i<n-1 && ((niza[i]>niza[i+1] && niza[i]>niza[i-1]) || (niza[i]<niza[i+1] && niza[i]<niza[i-1]))){
            printf("%d %d %d", niza[i-1], niza[i], niza[i+1]);
            i++;
        }
        printf("\n");
    }
    return 0;
}
