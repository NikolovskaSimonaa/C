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
    for(i=0;i<n;i++){
        while(niza[i+1]>niza[i] && i<n-1){
            printf("%d ", niza[i]);
            i++;
        }
        printf("%d\n", niza[i]);
    }
    return 0;
}
