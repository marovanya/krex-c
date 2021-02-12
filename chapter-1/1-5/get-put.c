/* The simplest example of a program that deals in input and output.
   Utilizes getchar() and putchar() to output each character that is
   entered as it is caught by the input function */

#include <stdio.h>

main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
}