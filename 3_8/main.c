#include <stdio.h>

int main()
{
    int x=1;

    // 4 nacini za zgolemuvanje na vrednosta na x za 1:
    x=x+1;
    printf("%d\n", x);
    x+=1;
    printf("%d\n", x);
    printf("%d\n", ++x);
    x++;
    printf("%d\n", x);

    return 0;
}
