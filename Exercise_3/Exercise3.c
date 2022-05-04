#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main ()
{
     
     float Hour, minutes, seconds;
     printf ("Enter hour/s:  \n");
     scanf ("%f", &Hour);
     printf ("minutes is equal to: %.0f \n", Hour * 60);

        minutes = Hour * 60;

    printf ( "seconds is equal to: %.0f \n", minutes * 60);

return 0;
}
