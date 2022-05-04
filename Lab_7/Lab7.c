//looping statement that will calculate the sum of the given number
#include <stdio.h>
int main ()
{
 int num, sum = 0, i;
 char answer;
    do
    {
      printf("\nEnter a number to find the sum: ");
      scanf("%d", &num);  
      sum=0;
     for( i=1; i<=num; i++){
      sum +=i; 
}
      printf("The sum of the given %d is: %d\n", num, sum);
        
     printf("\nDO YOU WANT TO CONTINUE? (Y/N): ");
    scanf(" %c", &answer);  
     
     if(answer == 'N' || answer == 'n'){

     printf("\nThank you for using the program!");
        }
    }while (answer == 'Y' || answer == 'y');
return 0;
}