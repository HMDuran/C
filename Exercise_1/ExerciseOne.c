/**
 * @file ExerciseOne.c
 * @author HMDuran
 * @brief Display user age with text color function
 * @version 0.1
 * @date 2022-08-01
 *
 * @copyright Copyright (c) 2022
 *
 */

/* header files */
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
  /* declaration of variables */
  int birthYear, currentYear;

  /* asking user's birth year */
  printf("\nEnter the year you were born: ");
  scanf("%d", &birthYear);

  /* asking the user the current year */
  printf("\nEnter the Current year: ");
  scanf("%d", &currentYear);

  /**
   * set the text color
   *
   * The following are the colors equivalent number:
   *
   * 1: Blue
   * 2: Green
   * 3: Cyan
   * 4: Red
   * 5: Purple
   * 6: Yellow Dark
   * 7: Default white
   * 8: Gray
   * 9: Bright Blue
   * 10: Bright Green
   * 11: Bright Cyan
   * 12: Bright Red
   * 13: Pink
   * 14: Yellow
   * 15: Bright white
   *
   */
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
  /* displaying the age of the user */
  printf("\nYour age is: %d", currentYear - birthYear);

  return 0;
}