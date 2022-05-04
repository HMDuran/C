// convert input seconds to hours, minutes and seconds.

#include<stdio.h>

int main()
{   
    int sec, hr, mn, sc;
    
    printf("\nEnter a time in seconds to convert : ");
    scanf("%d", &sec);

    hr = sec / 3600;
    mn = (sec - (3600*hr)) / 60;
    sc = sec  % 60;

    printf("\nThe %d seconds = %d hour(s) : %d minute(s) :  %d second(s)\n", sec,hr,mn,sc);

    return 0;
}