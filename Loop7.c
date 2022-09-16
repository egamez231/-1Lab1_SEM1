#include <stdio.h>

int main ()
{
int iNumber, even;
int Neg = 0 ;

even = iNumber % 2;

do
    {
        printf("Enter a number:");
        scanf("%d", &iNumber);
        even = iNumber % 2;

        if (even == 0 && Neg < iNumber)
            {
              Neg =  iNumber;
            }

    }
while (Neg > iNumber || even != 0);

printf ("\n\nThe positive value is : %d", iNumber);
return 0;
}
