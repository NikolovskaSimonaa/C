#include <stdio.h>

int main()
{
    int a, b;
    printf("Vnesi dva broja:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    if(a>b)
        printf("%d e pogolem od %d\n", a, b);
    else if(b>a)
        printf("%d e pogolem od %d\n", b, a);
    else
        printf("Broevite se ednakvi");
    return 0;
}
