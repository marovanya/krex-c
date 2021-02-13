/* this program replaces tabs in the input with the proper number of blanks
   spaces to the next tab stop */

#include <stdio.h>

#define MAXLINE 1000
#define TABWIDTH 8

int getline(char line[], int maxline);

main()
{
    char line[MAXLINE];
    int i, j, k, len;

    while ((len = getline(line, MAXLINE)) > 0)
    {
        printf("%s", line);
        k = 0;
        for (i = 0; line[i] != '\0'; ++i)
        {
            if (k == TABWIDTH)
            {
                k = 0;
            }
            ++k;
            if (line[i] == '\t')
            {
                for (j = len; j > i; --j)
                {
                    line[j + TABWIDTH - k] = line[j];
                    line[j] = ' ';
                }
                line[j] = ' ';
                len = len + TABWIDTH - k;
            }
        }
        printf("%s", line);
    }
}

int getline(char s[], int lim)
{
    int c;
    long i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }
    if (c != EOF && c != '\n')
    {
        while (c = getchar() != EOF && c != '\n')
        {
            ++i;
        }
    }
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    
    return i;
}