/* This program counts blanks tabs and newlines */

#include <stdio.h>

main()
{
    int c, bc, tc, nc;

    bc = 0;
    tc = 0;
    nc = 0;
    
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            ++bc;
        }
        if (c == '\t')
        {
            ++tc;
        }
        if (c == '\n')
        {
            ++nc;
        }
    }
    printf("\nSpaces:%d\nTabs:%d\nNewlines:%d\n", bc, tc, nc);
}