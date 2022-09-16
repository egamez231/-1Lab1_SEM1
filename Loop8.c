#include <stdio.h>
int main ()
{
int x, y, z;

printf ("enter number:");
scanf ("%d",y);

y += 1;
x = y * 10;
z = z * ( y + 5 );

printf ("Value %d", x);
printf ("Value %d", z);

return 0;
}
