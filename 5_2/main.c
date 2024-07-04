#include <stdio.h>
#include <math.h>

int main()
{
    double amount;             /* vrednost na depozitot */
    double principal=1000.0; /* pochetna suma */
    double rate= .05;         /* godishna kamatna stapka */
    int year;                  /* brojach na godini */

    printf("%4s%-25s\n", "Godina", "Vrednost na depozitot");
    for (year=1; year<=10; year++){
        amount=principal * pow(1.0 + rate, year);

        printf("%4d%-25.2f\n", year, amount);
    }
    return 0;
}
