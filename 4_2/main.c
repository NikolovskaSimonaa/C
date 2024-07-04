#include <stdio.h>

// Resenie na vezbite 2 i 3 kombinirano

int main()
{
    int counter, i=0;
    int grade;
    int total=0;
    float average;

    printf("Vnesi kolku ucenici ima vo klasot:\n");
    scanf("%d", &counter);

    while ( i < counter ) {
        printf( "Vnesi ocena: " );
        scanf( "%d", &grade );
        total = total + grade;
        i++;
    }

    average = (float) total / counter;

    printf( "Srednata vrednost na klasot e %.3f\n", average );

    return 0;
}
