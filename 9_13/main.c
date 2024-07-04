#include <stdio.h>

#define max 100

int main()
{
    int m, n, matrica[max][max], i, j, broj=1;
    printf("Vnesi dimenzii na matricata:\n");
    scanf("%d%d", &m, &n);

    for(i=0;i<n;i++){ //vnesuvanjeto na elementite e po koloni
        if(i%2==0){
            for(j=0;j<m;j++){
                matrica[j][i]=broj++;
            }
        }else{
            for(j=m-1;j>=0;j--){
                matrica[j][i]=broj++;
            }
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }
    return 0;
}
