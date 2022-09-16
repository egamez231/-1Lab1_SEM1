#include <stdio.h>

int main() {

int n, choice, i;
char sel;
float res_tot1, inv_res_tot,res_tot2;

printf("This is a program that calculates resistance.\n");

do {

    printf("How many resistors are there: ");
    scanf("%d", &n);
    printf("\n");

    double r[n];

    for(i=0; i<n; i++) {
        printf("Resistor %d: ", i+1);
        scanf("%lf", &r[i]);
    }
    for(i=0; i<n; i++)
        {
    inv_res_tot+=(1/r[i]);
        }
    res_tot1=(1/inv_res_tot); // Parallel Resistor Formular

    for(i=0; i<n; i++)
        {
            res_tot2+=r[i]; // Series Resistor Formular
        }

    printf("\nThe total  parallel resistance is: %f Ohms\n", res_tot1);
    printf("\nThe total series resistance is: %f Ohms\n", res_tot2);

    printf("\nWould you like to calculate another(y/n): ");
    getchar();
    scanf("%c", &sel);

} while (sel=='Y' || sel=='y');



return(0);
}
