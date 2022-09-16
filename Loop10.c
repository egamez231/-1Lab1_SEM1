#include <stdio.h>

int main() {

int R,x=0 ; // Declare
float v, s, p, sumP; //Declare

printf("This is a program that calculates resistance.\n");

printf ("Number of Resistor : ");
scanf ("%d",&R); // user enter number of resistor

for (x = 0; x < R ; x++)
    {
        printf("\nEnter Resistor Value:");
        scanf ("%f",&v); // Value of Resistor

        s += v;       // Series Fomular

        p += (1/v);
        sumP = 1 / p;    // Parallel Formular
    }
printf ("\n\nSeries Resistor: %.0f KOhm", s);
printf ("\nParallel Resistor: %.3f KOhm\n\n", sumP);


return(0);
}
