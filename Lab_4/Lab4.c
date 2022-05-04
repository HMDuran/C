//convert input Days to Years, Months and Days. 

#include<stdio.h>
#define ONEMN 30
#define ONEYR 365
int main()
{   
    int day, yr, mn, dy;
    
    printf("\nEnter a Number of Days to convert : ");
    scanf("%d", &day);

    yr = day / ONEYR;
    mn = (day - yr * ONEYR)  / ONEMN;
    dy = (day - yr * ONEYR - mn * ONEMN);

    printf("\nThe %d Days = %d Year(s) | %d Month(s) | %d Day(s)\n", day,yr,mn,dy);

    return 0;
}