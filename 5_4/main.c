#include <stdio.h>

int main()
{
    int n;
    printf("Vnesi broj (najmnogu 4 cifri):\n");
    scanf("%d", &n);
    printf("Brojot %d pretstaven vo rimski broj e: ", n);
    while(n>0){
        if(n<10000 && n>=1000){
            printf("M");
            n=n-1000;
        }
        else if(n>=500 && n<1000){
            printf("D");
            n=n-500;
        }
        else if(n>=100 && n<500){
            printf("C");
            n=n-100;
        }
        else if(n>=50 && n<100){
            printf("L");
            n=n-50;
        }
        else if(n>=10 && n<50){
            printf("X");
            n=n-10;
        }
        else if(n>=5 && n<10){
            if(n==9){
                printf("IX");
                n=n-9;
            }
            else{
                printf("V");
                n=n-5;
            }
        }
        else if(n>=1 && n<5){
            if(n==4){
                printf("IV");
                n=n-4;
            }
            else{
                printf("I");
                n=n-1;
            }
        }
    }
    return 0;
}
