/**
 * @file Lab5.c
 * @author HMDuran
 * @brief Program to identify if the input number is positive/negative and
 * odd/even.
 * @version 0.1
 * @date 2022-08-03
 *
 * @copyright Copyright (c) 2022
 *
 */

/* header file */
#include <stdio.h>

int main() {
  /* declaration of variables */
  int userNumber;

  /* asking user to enter number */
  printf("Enter a number : ");
  scanf("%d", &userNumber);

  if (userNumber >= 0 && userNumber % 2 == 0)
    printf("%d is a Positive and Even Number", userNumber);

  else if (userNumber >= 0 && userNumber % 2 != 0)
    printf("%d is a Postive and Odd Number", userNumber);

  else if (userNumber <= 0 && userNumber % 2 == 0)
    printf("%d is a Negative and Even Number", userNumber);

  else
    printf("%d is a Negative and Odd Number", userNumber);

  return 0;
}