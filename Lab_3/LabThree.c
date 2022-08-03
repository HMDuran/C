/**
 * @file LabThree.c
 * @author HMDuran
 * @brief program that will convert input seconds to hours, minutes and seconds.
 * @version 0.1
 * @date 2022-08-03
 *
 * @copyright Copyright (c) 2022
 *
 */

/* header file */
#include <stdio.h>

/* Macro substitution */
#define SECONDS_IN_ONE_MINUTE 60
#define SECONDS_IN_ONE_HOUR 3600

int main() {
  /* declaration of variables */
  int userSeconds, hours, minutes, seconds;

  /* asking user to input time in seconds */
  printf("\nEnter a time in seconds to convert : ");
  scanf("%d", &userSeconds);

  /* calculate seconds to hours, minutes and seconds */
  hours = userSeconds / SECONDS_IN_ONE_HOUR;
  minutes =
      (userSeconds - (SECONDS_IN_ONE_HOUR * hours)) / SECONDS_IN_ONE_MINUTE;
  seconds = userSeconds % SECONDS_IN_ONE_MINUTE;

  /* display output */
  printf("\nThe %d seconds = %d hour(s) : %d minute(s) :  %d second(s)\n",
         userSeconds, hours, minutes, seconds);

  return 0;
}