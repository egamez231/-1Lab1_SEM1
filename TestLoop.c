#include<stdio.h>

int main() {

int r[10], num, Rs = 0,i;
float Rp = 0;

printf("Enter the number of Resistances : ");

scanf("%d", &num);

printf("\nEnter Value of Each Resistance : n");

for (i = 0; i < num; i++)
{

printf("\n R%d : ", i + 1 ); // Start value with R1

scanf("%d", &r[i]); //  Scan Value of each resistor

}

for (i = 0; i < num; i++)
    {
        Rs = Rs + r[i]; // Formular for Equivalent Series Resistance
    }
for (i = 0; i < num; i++)
    {
        Rp = 1 / (1/r[i]); // Formular for Equivalent Parallel Resistance
    }

printf("\nEquivalent Series Resistance : %d Kohm", Rs);
printf("\nEquivalent Parallel Resistance : %lf Kohm", Rp);

return (0);

}
