/* this program writes all input lines that are longer than 80 characters */

#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

main()
{
    int len;        /* current line length */
    char line[MAXLINE]; /* current input line */

    while ((len = getline(line, MAXLINE)) > 0)
    {
        if (len > 80)
        {
            printf("%s\nlength:%d\n", line, len);
        }
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

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}