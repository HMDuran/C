/**
 * @file Lab8.c
 * @author HMDuran
 * @brief program that will identify the even and odd numbers for the given
 * number
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
  int userNumber, i;
  char answer;

  do {
    /* asking user to enter number */
    printf("\nEnter a number: ");
    scanf("%d", &userNumber);

    /* display ouput */
    printf("\nThe Even Numbers are: ");
    for (i = 2; i <= userNumber; i++) {
      if (i % 2 == 0)
        printf(" %d", i);
    }
    /* display ouput */
    printf("\nThe Odd Numbers are: ");
    for (i = 1; i <= userNumber; i++) {
      if (i % 2 != 0)
        printf(" %d", i);
    }
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