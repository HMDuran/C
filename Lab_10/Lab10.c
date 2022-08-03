/**
 * @file Lab10.c
 * @author HMDuran
 * @brief using one-dimensional array that calculates the sum of five input
 * values from the user and displays the calculated sum.
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
  int array[5];
  int i;
  char answer;

  do {
    /* asking user to enter numbers  */
    printf("\nENTER YOUR 5 INTEGERS TO ADD\n");

    int sum = 0;
    for (i = 0; i < 5; i++) {
      printf("\nEnter your no. %d: ", i + 1);
      scanf("%d", &array[i]);
      /* calculate the sum of the entered numbers */
      sum += array[i];
    }
    /* display ouput */
    printf("\nThe Sum Of All Entered Numbers: %d\n", sum);

    /* Asking if the user want to repeat the program */
    printf("\nDO YOU WANT TO CONTINUE? (Y/N): ");
    scanf(" %c", &answer);

    if (answer == 'N' || answer == 'n') {
      /* display ouput if the use answer is n */
      printf("\nThank You For Using The Program!");
    }
  } while (answer == 'Y' || answer == 'y');
}