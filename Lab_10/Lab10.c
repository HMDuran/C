/** using one-dimensional array that calculates the sum of five 
input values from the user and displays the calculated sum.  **/

#include <stdio.h>
int main ()
{
 int array[5];
 int i;
 char answer;

do
{ 
    printf("\nENTER YOUR 5 INTEGERS TO ADD\n");

    int sum = 0;
    for(i=0; i<5; i++)
{   
    printf("\nEnter your no. %d: ", i+1);
    scanf("%d", &array[i]);
    sum += array[i];
}
    printf("\nThe Sum Of All Entered Numbers: %d\n", sum);

    printf("\nDO YOU WANT TO CONTINUE? (Y/N): ");
        scanf(" %c", &answer);  
     
         if(answer == 'N' || answer == 'n'){

         printf("\nThank You For Using The Program!");
        }
    }
    while (answer == 'Y' || answer == 'y');
}

