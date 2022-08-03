/**
 * @file LabTwelve.c
 * @author HMDuran
 * @brief program for measurement conversion
 * @version 0.1
 * @date 2022-08-03
 *
 * @copyright Copyright (c) 2022
 *
 */

/* header file */
#include <stdio.h>

/* Macro substitution */
#define ONE_CENTIMETER_IN_MILLIMETER 10
#define ONE_METER_IN_CENTIMETER 100
#define ONE_METER_IN_MILLIMETER 1000

int main() {
  /* declaration of variables */
  int choice;
  float length, centimeter, millimeter, meter;

  /* display selection for measuring metrics */
  printf("\nSELECT MEASURING METRICS");
  printf("\n 1. Centimeter to Millimeter and Meter");
  printf("\n 2. Millimeter to Centimeter and Meter");
  printf("\n 3. Meter to Centimeter and Millimeter\n");
  printf("\n ENTER YOUR CHOICE HERE: ");
  scanf("%d", &choice);
  /* asking user choice */
  printf("\n ENTER THE LENGTH TO CONVERT HERE: ");
  scanf("%f", &length);

  switch (choice) {
  case 1:
    /* calculate centimeter to millimeter and meter */
    millimeter = length * ONE_CENTIMETER_IN_MILLIMETER;
    meter = length / ONE_METER_IN_CENTIMETER;

    /* display output */
    printf("\n The Length in Millimeter is: %.2f", millimeter);
    printf("\n The Length in Meter is: %.2f", meter);
    break;

  case 2:
    /* calculate millimeter to centimeter and meter */
    centimeter = length / ONE_CENTIMETER_IN_MILLIMETER;
    meter = length / ONE_METER_IN_MILLIMETER;

    /* display output */
    printf("\n The Length in Centimeter is: %.2f", centimeter);
    printf("\n The Length in Meter is: %.2f", meter);
    break;

  case 3:
    /* calculate meter to centimeter and millimeter */
    centimeter = ONE_METER_IN_CENTIMETER * length;
    millimeter = length * ONE_METER_IN_MILLIMETER;

    /* display output */
    printf("\n The Length in Centimeter is: %.2f", centimeter);
    printf("\n The Length in Millimeter is: %.2f", millimeter);
    break;

  default:
    /* display invalid choice */
    printf("\n YOU HAVE ENTERED INVALID CHOICE");
  }
  return 0;
}