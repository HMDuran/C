#include<stdio.h>
int main()
{   
    int num1, num2;
    
    printf("Enter First Number: \n");
    scanf("%d", &num1);
    printf("Enter Second Number: \n");
    scanf("%d", &num2);

    printf("The sum of two numbers is: %d\n", num1 + num2);
    printf("The difference of two numbers is: %d\n", num1 - num2);
    printf("The product of two numbers is: %d\n", num1 * num2);
    printf("The quotient of two numbers is: %d\n", num1 / num2);
    printf("The modulus of two numbers is: %d\n", num1 % num2);

    return 0;
}