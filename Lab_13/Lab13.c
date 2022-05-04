//program for measurement conversion
#include<stdio.h>
#define ONEM 100
#define MMCM 10
#define ONECM 100
#define ONEMM 1000


int main()
{    
    int pick;
    float lg, cm, mm, m;

    printf("\nSELECT MEASURING METRICS");
    printf("\n 1. Centimeter to Millimeter and Meter");
    printf("\n 2. Millimeter to Centimeter and Meter");
    printf("\n 3. Meter to Centimeter and Millimeter\n");
    printf("\n ENTER YOUR CHOICE HERE: ");
    scanf("%d", &pick);

    printf("\n ENTER THE LENGTH TO CONVERT HERE: ");
    scanf("%f", &lg);
    
    switch (pick)
    {
        case 1 : 
            mm = lg * MMCM; 
            m =  lg / ONEM;
            printf("\n The Length in Millimeter is: %.2f", mm);
            printf("\n The Length in Meter is: %.2f", m);
            break;
    
        case 2 : 
            cm = lg / MMCM;
            m =  lg / ONEMM;
            printf("\n The Length in Centimeter is: %.2f", cm);
            printf("\n The Length in Meter is: %.2f", m);
            break;
        case 3 : 
            cm = ONECM * lg;
            mm = lg * ONEMM;
            printf("\n The Length in Centimeter is: %.2f", cm);
            printf("\n The Length in Millimeter is: %.2f", mm);
            break;

        default : printf("\n YOU HAVE ENTERED INVALID CHOICE");

    }
  return 0;
}