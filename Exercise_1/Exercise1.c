#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main ()
{
     
     int b, c;
     printf ("Enter your birthyear: \n");
     scanf ("%d", &b);
     printf ("Current year: \n");
     scanf ("%d", &c);
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
    printf ("Your age is: %d \n", c - b);

return 0;
}