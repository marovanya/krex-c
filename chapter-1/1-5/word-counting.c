/* This program counts lines, words and characters. Words are sequences
   of characters that don't contain blanks */

#include <stdio.h>

#define IN  1   /* inside a word */
#define OUT 0   /* outside a word */

main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
        {
            ++nl;
        }
        if (c == ' ' || c == '\n' || c == '\t') /* We now have boolean operators! :D */
        {
            state = OUT;
        }
        else if (state == OUT) /* Also else statements <3 */
        {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
}