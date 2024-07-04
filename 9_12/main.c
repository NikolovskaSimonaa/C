#include <stdio.h>

#define max 100

int main(){
    int m, n, i, j, k;
    int polinom1[max], polinom2[max], sum[max];
    int temp;
    printf("Vnesi gi m i n:\n");
    scanf("%d%d", &m, &n);
    for(i=0;i<m;i++){
        printf("Vnesi koeficient od prviot polinom:\n");
        scanf("%d", &polinom1[i]);
    }
    for(i=0;i<n;i++){
        printf("Vnesi koeficient od vtoriot polinom:\n");
        scanf("%d", &polinom2[i]);
    }
    if(m>n){
        i=0;
        j=0;
        temp=m;
        while(temp>n){
            sum[i]=polinom1[i];
            i++;
            temp--;
        }
        while(i<m){
            sum[i]=polinom1[i]+polinom2[j];
            i++;
            j++;
        }
        printf("Sumata na koeficientite e:\n");
        for(k=0;k<m;k++)
            printf("%d ", sum[k]);
    }
    else if(n>m){
        i=0;
        j=0;
        temp=n;
        while(temp>m){
            sum[j]=polinom2[j];
            j++;
            temp--;
        }
        while(j<n){
            sum[j]=polinom2[j]+polinom1[i];
            i++;
            j++;
        }
        printf("Sumata na koeficientite e:\n");
        for(k=0;k<n;k++)
            printf("%d ", sum[k]);
    }
    else{
        for(k=0;k<m;k++)
            sum[k]=polinom1[k]+polinom2[k];
        printf("Sumata na koeficientite e:\n");
        for(k=0;k<m;k++)
            printf("%d ", sum[k]);
    }
    return 0;
}
