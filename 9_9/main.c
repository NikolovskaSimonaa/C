#include <stdio.h>

int main()
{
    int n, x, i, j, k;
    int counter;
    float rezultat, procent;
    printf("Vnesi go n (pocetniot broj na bakterii):\n");
    scanf("%d", &n);
    printf("Vnesi gi parametarot i, j, x:\n");
    scanf("%d%d%d", &i, &j, &x);
    printf("Vnesi go parametarot k (za kolku minuti da se presmeta ostanatiot broj na bakterii)\n");
    scanf("%d", &k);
    for(counter=i;counter<=k;counter+=i){ // sekoja i-ta munuta do krajnoto vreme k, bakteriite se dupliraat
        n=n*2;
    }
    rezultat=n;
    for(counter=j;counter<=k;counter+=j){ // sekoja j-ta munuta do krajnoto vreme k, bakteriite izumiraat so procent x
        procent=(float)x/100;
        rezultat=rezultat-rezultat*procent;
    }
    printf("Ostanatiot broj na bakterii posle %d minuti e %f\n", k, rezultat);
    return 0;
}
