#include <stdio.h>

int main()
{
    int n, i ,j, proverka, square, cube;
    int cifri[10];
    printf("Vnesi broj:\n");
    scanf("%d", &n);
    printf("Broevi pomali od %d cij kvadrat i kub gi sodrzat site cifri po ednas se: ", n);
    for(i=1;i<=n;i++){
        proverka=1;
        square=i*i;
        cube=square*i;
        for(j=0;j<10;j++) cifri[j]=0;
        while(square>0){
            cifri[square%10]++;
            square=square/10;
        }
        while(cube>0){
            cifri[cube%10]++;
            cube=cube/10;
        }
        for(j=0;j<10;j++){
            if(cifri[j]!=1) proverka=0;
        }
        if(proverka==1)
            printf("%d ,\n", i);
    }
    return 0;
}
