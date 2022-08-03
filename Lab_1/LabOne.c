/**
 * @file LabOne.c
 * @author HMDuran
 * @brief  program that will display the sum, difference, product, quotient and
 * modulus of two numbers
 * @version 0.1
 * @date 2022-08-03
 *
 * @copyright Copyright (c) 2022
 *
 */

/* header files */
#include <stdio.h>

int main() {
  /* declaration of variables */
  int firstNum, secondNum;

  /* asking user first number*/
  printf("\nEnter First Number: ");
  scanf("%d", &firstNum);

  /* asking user second number */
  printf("Enter Second Number: ");
  scanf("%d", &secondNum);

  /*calculate and display the output */
  printf("\nThe sum of two numbers is: %d\n", firstNum + secondNum);
  printf("The difference of two numbers is: %d\n", firstNum - secondNum);
  printf("The product of two numbers is: %d\n", firstNum * secondNum);
  printf("The quotient of two numbers is: %d\n", firstNum / secondNum);
  printf("The modulus of two numbers is: %d\n", firstNum % secondNum);

  return 0;
}