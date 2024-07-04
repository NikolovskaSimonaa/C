#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    for(c=2;c<=100;c++){
        for(b=2;b<=100;b++){
            for(a=2;a<=100;a++){
                if(pow(c,2)==(pow(a,2)+pow(b,2)))
                    printf("Pitagorini broevi: a = %d, b = %d, c = %d\n", a, b, c);
            }
        }
    }
    return 0;
}
