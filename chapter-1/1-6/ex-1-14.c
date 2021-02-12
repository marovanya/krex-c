/* this program prints a histogram of different characters
   in its input */

#include <stdio.h>

main()
{
    int c, i, j, upperbound;
    int ncharacter[94];

    for (i = 0; i < 94; ++i)
    {
        ncharacter[i] = 0;
    }

    upperbound = 0;
    while((c = getchar()) != EOF)
    {
        ++ncharacter[c - ' '];
        if (ncharacter[c - ' '] > upperbound)
        {
            upperbound = ncharacter[c - ' '];
        }
    }

    printf("TABLE\nCharacter\tFrequency\n");
    for (i = 0; i < 94; ++i)
    {
        if (ncharacter[i] > 0)
        {
            printf("\'%c\'\t\t%d\n", i + ' ', ncharacter[i]);
        }
    }

    printf("\nHORIZONTAL HISTOGRAM\nY: Character, X: Frequency\n");
    for (i = 0; i < 94; ++i)
    {
        if (ncharacter[i] > 0)
        {
            printf("%c|", i + ' ');
            for (j = 0; j < ncharacter[i]; ++j)
            {
                putchar('#');
            }
            putchar('\n');
        }
    }

    printf("\nVERTICAL HISTOGRAM\nY: Frequency, X: Character\n");
    for (upperbound; upperbound > 0; --upperbound)
    {
        for (i = 0; i < 94; ++i)
        {
            if (ncharacter[i] > 0)
            {
                if (ncharacter[i] >= upperbound)
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
    for (i = 0; i < 94; ++i)
    {
        if (ncharacter[i] > 0)
        {
            putchar('-');
        }
    }
    putchar('\n');
    for (i = 0; i < 94; ++i)
    {
        if (ncharacter[i] > 0)
        {
            putchar(i + ' ');       
            /* this results in a bug for i > 9 but its a low level bug so I like it */
        }
    }
    putchar('\n');
}