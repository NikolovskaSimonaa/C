#include <stdio.h>

int main()
{
    int sum, number;

    for(sum=0, number=2; number<=100; number+=2){
        sum+=number;
    }

    printf("Sumata e %d\n", sum);
    return 0;
}

