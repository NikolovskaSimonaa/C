#include <stdio.h>

#define max 100

int prost(int n){
    int i;
    for(i=2;i<=n/2;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int n, i, j=0;
    int prosti_broevi[max], stepen[max]={0};
    printf("Vnesi broj:\n");
    scanf("%d", &n);
    for(i=2;i<=n;i++){
        if(prost(i)==1){
            prosti_broevi[j]=i;
            j++;
        }
    }
    for(i=0;i<j;i++){
        while(n>0 && n%prosti_broevi[i]==0){
            stepen[i]++;
            n=n/prosti_broevi[i];
        }
    }
    printf("Brojot %d pretstaven kako proizvod od prosti mnoziteli: \n", n);
    for(i=0;i<j;i++){
        printf("%d^%d * ", prosti_broevi[i], stepen[i]);
    }
    return 0;
}
