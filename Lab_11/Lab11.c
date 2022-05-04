//convert meter to centimeter and millimeter.

#include<stdio.h>
#define ONECM 100
#define ONEMM 1000
int main()
{
    float m, cm, mm;
    printf("\t\t\t\t\t\t\t*************************************************************************\n");
    printf("\t\t\t\t\t\t\t**********THE CONVERSION OF METER TO CENTIMETER AND MILLIMETER***********\n");
    printf("\n\t\t\t\t\t\t\t\t\tEnter a Length of Meter to convert : ");
    scanf("%f",&m);

    cm =  ONECM * m;
    mm =  m * ONEMM;
    
    printf("\t\t\t\t\t\t\t\t\tThe Length in Centimer is : %.2f\n", cm);
    printf("\t\t\t\t\t\t\t\t\tThe Length in Millimeter is : %.2f\n", mm);
    printf("\n\t\t\t\t\t\t\t************Program Created by Hanah Mae T. Duran from BSCS1*************");
    printf("\n\t\t\t\t\t\t\t*************************************************************************");
    return 0;

}