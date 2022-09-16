#include<stdio.h>
int main( )
{
char cGrade;
long int lMatrix;
float fSum, fScore1, fScore2, fFinal, fTotal;
char cChoice;


do
{
printf("\nProgram to Calculate Student Grade");//input: student’s marks


printf ("\nInsert matrix no. of the student: ");
scanf ("%ld",&lMatrix);

printf ("\nInsert marks for Test 1 (total of 25): ");
scanf ("%f",&fScore1);

printf ("\nInsert marks for Test 2 (total of 25): ");
scanf ("%f",&fScore2);

printf ("\nInsert marks for Final Exam (total of 50): ");
scanf ("%f",&fFinal);

//calculate total marks
fTotal = fScore1 + fScore2 + fFinal;
printf("\nTotal Marks: %5.2f",fTotal);


//determine student grade
if (fTotal>= 80)
    {
        cGrade = 'A';
    }
else if (fTotal >= 60)
    {
        cGrade = 'B';
    }
else if (fTotal >= 50)
    {
        cGrade = 'C';
    }
else if (fTotal >=  40)
    {
        cGrade = 'D';
    }
else
    {
        cGrade = 'F';
    }



printf("\nGrade is:%c ",cGrade);
//asking for the next input
printf ("\nDo you want to continue? ");
scanf ("%s",&cChoice);


}while (cChoice =='y'|| cChoice == 'Y');

printf("\nThank you");


return 0;
}

