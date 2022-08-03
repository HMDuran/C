/**
 * @file Lab9.c
 * @author HMDuran
 * @brief program that will identify the even and odd numbers if even compute
 * the sum from 1 to n. if odd compute the factorial of n
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
  int num, i, sum = 0, f = 1;
  char answer;

  do {
    /* asking user to enter number */
    printf("\nEnter a number to determine if it is an even or odd number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
      /* display output */
      printf("\nThe number you entered %d is an even number", num);
      for (i = 1; i <= num; i++)
        /* calculate the sum */
        sum = sum + i;
      /* display output */
      printf("\nThe sum of the entered even number between 1 to %d is: %d\n",
             num, sum);
    } else {
      /* display output */
      printf("\nThe number you entered %d is an odd number", num);
      for (i = 1; i <= num; i++)
        /* calculate the factorial */
        f = f * i;
      /* display output */
      printf("\nThe factorial of the entered odd number %d is: %d\n", num, f);
    }
    /* Asking if the user want to repeat the program */
    printf("\nDO YOU WANT TO CONTINUE? (Y/N): ");
    scanf(" %c", &answer);

    if (answer == 'N' || answer == 'n') {
      /* display ouput if the use answer is n */
      printf("\nThank you for using the program!");
    }
  } while (answer == 'Y' || answer == 'y');
  return 0;
}