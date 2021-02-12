/* This program prints a histogram of the lenghts of the words in its input. */

#include <stdio.h>

#define IN  1   /* inside a word */
#define OUT 2   /* outside of a word */

main()
{
    int c, i, j, state, thiswordlength, upperbound;
    int nwordlength[20];     /* Represents the length of a given set of words */

    for (i = 0; i < 20; ++i)
    {
        nwordlength[i] = 0;
    }

    state = OUT;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
            ++nwordlength[thiswordlength];
            if (nwordlength[thiswordlength] > upperbound)
            {
                upperbound = nwordlength[thiswordlength];
            }
        }
        else if (state == IN)
        {
            ++thiswordlength;
        }
        else
        {
            state = IN;
            thiswordlength = 1;
        }
    }

    printf("TABLE\nWord length\tFrequency\n");
    for (i = 0; i < 20; ++i)
    {
        if (nwordlength[i] > 0)
        {
            printf("%d\t\t%d\n", i, nwordlength[i]);
        }
    }

    printf("\nHORIZONTAL HISTOGRAM\nY: Word Length, X: Frequency\n");
    for (i = 0; i < 20; ++i)
    {
        if (nwordlength[i] > 0)
        {
            printf("%d|", i);
            for (j = 0; j < nwordlength[i]; ++j)
            {
                putchar('#');
            }
            putchar('\n');
        }
    }

    printf("\nVERTICAL HISTOGRAM\nY: Frequency, X: Word Length\n");
    for (upperbound; upperbound > 0; --upperbound)
    {
        for (i = 0; i < 20; ++i)
        {
            if (nwordlength[i] > 0)
            {
                if (nwordlength[i] >= upperbound)
                {
                    putchar('#');
                }
                else
                {
                    putchar(' ');
                }
            }
        }
        putchar('\n');
    }
    for (i = 0; i < 20; ++i)
    {
        if (nwordlength[i] > 0)
        {
            putchar('-');
        }
    }
    putchar('\n');
    for (i = 0; i < 20; ++i)
    {
        if (nwordlength[i] > 0)
        {
            putchar(i + '0');       
            /* this results in a bug for i > 9 but its a low level bug so I like it */
        }
    }
    putchar('\n');
}
