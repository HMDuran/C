/**
 * @file LabSeven.c
 * @author HMDuran
 * @brief program that will calculate the sum of the given number
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
  int userNumber, sum = 0, i;
  char answer;

  do {
    /* asking user to enter number */
    printf("\nEnter a number to find the sum: ");
    scanf("%d", &userNumber);
    sum = 0;
    for (i = 1; i <= userNumber; i++) {
      sum += i;
    }
    /* display ouput */
    printf("\nThe sum of the given %d is: %d\n", userNumber, sum);

    /* Asking if the user want to repeat the program */
    printf("\n\nDO YOU WANT TO CONTINUE? (Y/N): ");
    scanf(" %c", &answer);

    if (answer == 'N' || answer == 'n') {
      /* display ouput if the use answer is n */
      printf("\nThank you for using the program!");
    }
  } while (answer == 'Y' || answer == 'y');
  return 0;
}