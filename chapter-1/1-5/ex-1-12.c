/* This program writes its input one word per line */
#include <stdio.h>

#define IN  1   /* inside a word */
#define OUT 0   /* outside a word */

main() 
{
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\t' && c != '\n') 
        {
            state = IN; 
            putchar(c);
        }
        else if (state == IN)
        {
            state = OUT;
            putchar('\n');
        }
    }
}