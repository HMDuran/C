//looping statement that will identify the even and odd numbers for the given number
#include <stdio.h>
int main ()
{
 int num, i;
 char answer;
    do
    {
      printf("\nEnter a number: ");   
      scanf("%d", &num); 
      printf("The Even Numbers are: ");
         for(i=2; i<=num; i++){
            if (i%2==0)
               printf(" %d", i);
     }
      printf("\nThe Odd Numbers are: ");   
         for (i=1; i<=num; i++){
            if (i%2!=0)
               printf(" %d", i); 
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