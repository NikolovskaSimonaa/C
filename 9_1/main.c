#include <stdio.h>
#include <math.h>

int main(){
    int n; // n - broj na strani vo mnoguagolnikot
    float a; // a - dolzina na sekoja strana
    float perimetar, plostina;
    printf("Vnesi n:\n");
    scanf("%d", &n);
    printf("Vnesi ja dolzinata na stranite:\n");
    scanf("%f", &a);

    perimetar=n*a;
    printf("Perimetar:%f\n", perimetar);

    plostina=(n*a*a)/(4*tan(3.14/n));
    printf("Plostina:%f\n", plostina);
    return 0;
}
