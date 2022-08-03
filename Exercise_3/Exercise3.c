/**
 * @file Exercise3.c
 * @author HMDuran
 * @brief program that will convert hours into minutes, seconds
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

/* Macro substitution */
#define MINUTES_IN_ONE_HOUR 60
#define SECONDS_IN_ONE_HOUR 3600

int main() {
  /* declaration of variables */
  float hours, minutes, seconds;

  /* asking user to input hours to convert to minutes and seconds */
  printf("\nEnter hour/s: ");
  scanf("%f", &hours);

  /* calculate hours to minutes and seconds */
  minutes = hours * MINUTES_IN_ONE_HOUR;
  seconds = hours * SECONDS_IN_ONE_HOUR;

  /* display output */
  printf("\nMinutes is equal to: %.0f", minutes);
  printf("\nSeconds is equal to: %.0f", seconds);

  return 0;
}
