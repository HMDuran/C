/**
 * @file Lab6.c
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
#define PI 3.14

int main() {
  int pick;
  float ca, rd, bs, hg, tr, sq, sd, rc, lg, wd;
  printf("\nSELECT AREA OF SHAPE TO COMPUTE:");
  printf("\n 1. Calculate The Area of a Circle");
  printf("\n 2. Calculate The Area of a Triangle");
  printf("\n 3. Calculate The Area of a Square");
  printf("\n 4. Calculate The Area of a Rectangle\n");
  printf("\nENTER YOUR CHOICE HERE: ");
  scanf("%d", &pick);

  switch (pick) {
  case 1:
    printf("\nEnter The Radius of a Circle: ");
    scanf("%f", &rd);

    ca = PI * rd * rd;
    printf("\nThe Area of a Circle is: %.2f", ca);
    break;

  case 2:
    printf("\nEnter The Base of a Triangle: ");
    scanf("%f", &bs);
    printf("\nEnter The Height of a Triangle: ");
    scanf("%f", &hg);

    tr = bs * hg / 2;
    printf("\nThe Area of Triangle is: %.2f", tr);
    break;

  case 3:
    printf("\nEnter The Side of a Square: ");
    scanf("%f", &sd);

    sq = sd * sd;
    printf("\nThe Area of a Square is: %.2f", sq);
    break;

  case 4:
    printf("\nEnter The Length of a Rectangle: ");
    scanf("%f", &lg);
    printf("\n Enter The Width of a Rectangle: ");
    scanf("%f", &wd);

    rc = lg * wd;
    printf("\nThe Area of a Rectangle is: %.2f", rc);
    break;

  default:
    printf("\nYOU HAVE ENTERED INVALID CHOICE");
  }
  return 0;
}