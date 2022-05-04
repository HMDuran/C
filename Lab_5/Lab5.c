//identify if positive or negative number
//identify if odd or even number
#include <stdio.h>
int main()
{
  int n1;
  printf("Enter a number : ");
  scanf("%d", &n1);
  
  if (n1>=0 && n1%2==0)
  printf("%d is a Positive and Even Number",n1);
  
  else if(n1>=0 && n1%2 !=0)
  printf("%d is a Postive and Odd Number", n1);
  
  else if(n1<=0 && n1%2 ==0)
  printf("%d is a Negative and Even Number", n1);
  
  else
  printf("%d is a Negative and Odd Number", n1);

}