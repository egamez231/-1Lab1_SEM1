#include <stdio.h>

int main() {

int n, choice, i;
char sel;
float res_tot, inv_res_tot;

printf("This is a program that calculates resistance.\n");

do{
    printf("Enter 1 for parallel or 2 for series: ");
    scanf("%d", &choice);

    printf("How many resistors are there: ");
    scanf("%d", &n);
    printf("\n");

    double r[n];

    for(i=0; i<n; i++) {
        printf("Resistor %d: ", i+1);
        scanf("%lf", &r[i]);
    }

    if(choice==1) {
        for(i=0; i<n; i++){
            inv_res_tot+=(1/r[i]);
        }

        res_tot=(1/inv_res_tot);
    }

    else if(choice==2) {
        for(i=0; i<n; i++) {
            res_tot+=r[i];
        }
    }

    printf("\nThe total resistance is: %f Ohms\n", res_tot);

    printf("\nWould you like to calculate another(y/n): ");
    getchar();
    scanf("%c", &sel);

} while(sel=='Y' || sel=='y');



return(0);
}
