/**
 * @file Lab4.c
 * @author HMDuran
 * @brief program that will convert input Days to Years, Months and Days.
 * @version 0.1
 * @date 2022-08-03
 *
 * @copyright Copyright (c) 2022
 *
 */

/* header file */
#include <stdio.h>

/* Macro substitution */
#define DAYS_IN_ONE_MONTH 30
#define DAYS_IN_ONE_YEAR 365

int main() {
  /* declaration of variables */
  int userDay, year, month, day;

  /* asking user to input number of days */
  printf("\nEnter a Number of Days to convert : ");
  scanf("%d", &userDay);

  /* calculate input Days to Years, Months and Days */
  year = userDay / DAYS_IN_ONE_YEAR;
  month = (userDay - year * DAYS_IN_ONE_YEAR) / DAYS_IN_ONE_MONTH;
  day = (userDay - year * DAYS_IN_ONE_YEAR - month * DAYS_IN_ONE_MONTH);

  /* display output */
  printf("\nThe %d Days = %d Year(s) | %d Month(s) | %d Day(s)\n", userDay,
         year, month, day);

  return 0;
}