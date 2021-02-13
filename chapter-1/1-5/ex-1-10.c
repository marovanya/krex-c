/* This program copies its input to its output, replacing each tab by
   \t, each backspace by \b, and each backslash by \\ */

#include <stdio.h>

main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            c = 't';
            putchar('\\');
        }
        if (c == '\b')
        {
            c = 'b';
            putchar('\\');
        }
        if (c == '\\')
        {
            c = '\\';
            putchar('\\');
        }
        putchar(c);
    }
}