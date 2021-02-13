/* This program copies its input to its output, replacing each string
   of one or more blanks by a single blank */

#include <stdio.h>

main()
{
    int c, bc;

    bc = 0;
    while((c = getchar()) != EOF)
    {
        /* I'm only pretending not to know about else statements ;) */
        if (c == '\t')
        {
            c = ' ';
        }
        if (c == ' ')
        {
            ++bc;
        }
        if (c != ' ')
        {
            bc = 0;
        }
        if (bc < 2)
        {
            putchar(c);
        }
    }
}