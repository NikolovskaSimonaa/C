#include <stdio.h>

int vreme(int c, int m, int s){
    int sekundi=0; // broj na sekundi do 12h - rezultat
    if(c<11)
        sekundi=sekundi+(11-c)*60*60;
    if(m<59)
        sekundi=sekundi+(59-m)*60;
    sekundi=sekundi+(60-s);
    return sekundi;
}

int main()
{
    int cas, minuta, sekunda, kolku;
    printf("Vnesi go vremeto\n");
    scanf("%d%*c%d%*c%d", &cas, &minuta, &sekunda);
    kolku=vreme(cas,minuta,sekunda);
    printf("Ima uste %d sekundi do 12 casot\n", kolku);
    return 0;
}
