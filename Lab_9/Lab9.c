/**looping statement that will identify the even and odd numbers
if even compute the sum from 1 to n. 
if odd compute the factorial of n **/

#include <stdio.h>
int main ()
{
 int num, i,sum =0, f=1;
 char answer;
    do
    {
      printf("\nEnter a number to determine if it is an even or odd number: ");   
      scanf("%d", &num); 
        if (num%2==0){
            printf("\nThe number you entered %d is an even number",num);
            for(i=1; i<=num;i++)
            sum = sum + i;
            printf("\nThe sum of the entered even number between 1 to %d is: %d\n", num, sum);
        }
        else {
            printf("\nThe number you entered %d is an odd number",num);
            for(i=1; i<=num;i++)
            f = f * i;
            printf("\nThe factorial of the entered odd number %d is: %d\n",num, f);
        }
        printf("\nDO YOU WANT TO CONTINUE? (Y/N): ");
        scanf(" %c", &answer);  
     
         if(answer == 'N' || answer == 'n'){

         printf("\nThank you for using the program!");
        }
    }
    while (answer == 'Y' || answer == 'y');
return 0;
}