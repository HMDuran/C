/**
 * @file LabSix.c
 * @author HMDuran
 * @brief program for computing the area
 * @version 0.1
 * @date 2022-08-03
 *
 * @copyright Copyright (c) 2022
 *
 */

/* header file */
#include <stdio.h>

/* Macro substitution */
#define PI 3.14

int main() {
  /* declaration of variables */
  int choice;
  float circle, radius, base, height, triangle, square, side, rectangle, length,
      width;

  /* display area of shape  selection */
  printf("\nSELECT AREA OF SHAPE TO COMPUTE:");
  printf("\n 1. Calculate The Area of a Circle");
  printf("\n 2. Calculate The Area of a Triangle");
  printf("\n 3. Calculate The Area of a Square");
  printf("\n 4. Calculate The Area of a Rectangle\n");

  /* asking user's choice */
  printf("\nENTER YOUR CHOICE HERE: ");
  scanf("%d", &choice);

  switch (choice) {
  case 1:
    /* asking user's radius of circle */
    printf("\nEnter The Radius of a Circle: ");
    scanf("%f", &radius);

    /* calculate circle */
    circle = PI * radius * radius;

    /* display ouput */
    printf("\nThe Area of a Circle is: %.2f", circle);
    break;

  case 2:
    /* asking user's base of a triangle */
    printf("\nEnter The Base of a Triangle: ");
    scanf("%f", &base);
    /* asking user's  height of a triangle */
    printf("\nEnter The Height of a Triangle: ");
    scanf("%f", &height);

    /* calculate triangle */
    triangle = base * height / 2;

    /* display ouput */
    printf("\nThe Area of Triangle is: %.2f", triangle);
    break;

  case 3:
    /* asking user's side of  square */
    printf("\nEnter The Side of a Square: ");
    scanf("%f", &side);

    /* calculate square */
    square = side * side;

    /* display ouput */
    printf("\nThe Area of a Square is: %.2f", square);
    break;

  case 4:
    /* asking user's length of  rectangle */
    printf("\nEnter The Length of a Rectangle: ");
    scanf("%f", &length);
    /* asking user's width of  rectangle */
    printf("\n Enter The Width of a Rectangle: ");
    scanf("%f", &width);

    /* calculate  rectangle */
    rectangle = length * width;

    /* display ouput */
    printf("\nThe Area of a Rectangle is: %.2f", rectangle);
    break;

  default:
    /* display invalid choice */
    printf("\nYOU HAVE ENTERED INVALID CHOICE");
  }

  return 0;
}