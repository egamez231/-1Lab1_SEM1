#include <stdio.h>
int main ()
{
int iNumber;
int max = 0;

printf("(To stop enter -999). Enter a number:");
scanf("%d", &iNumber);

while(iNumber != -999 )
    {
        if (max < iNumber)
            {
              max = iNumber;
            }
        printf("(To stop enter -999). Enter a number:");
        scanf("%d", &iNumber);
    }

printf("The largest value is %d",max);
printf("\nThank You\n\n");
return 0;
}
