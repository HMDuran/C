/**
 * @file Lab11.c
 * @author HMDuran
 * @brief program that will convert meter to centimeter and millimeter.
 * @version 0.1
 * @date 2022-08-03
 *
 * @copyright Copyright (c) 2022
 *
 */

/* header file */
#include <stdio.h>

/* Macro substitution */
#define ONE_METER_IN_CENTIMETER 100
#define ONE_METER_IN_MILLIMETER 1000

int main() {
  /* declaration of variables */
  float meter, centimeter, millimeter;

  printf("\nTHE CONVERSION OF METER TO CENTIMETER AND MILLIMETER");
  /* asking user to input length of meter */
  printf("\n\nEnter a Length of Meter to convert : ");
  scanf("%f", &meter);

  /* calculate meter to centimeter and millimeter */
  centimeter = ONE_METER_IN_CENTIMETER * meter;
  millimeter = meter * ONE_METER_IN_MILLIMETER;

  /* display output */
  printf("\n\nThe Length in Centimeter is : %.2f\n", centimeter);
  printf("The Length in Millimeter is : %.2f\n", millimeter);
  return 0;
}