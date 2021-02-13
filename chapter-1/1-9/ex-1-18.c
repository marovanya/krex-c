/* This program removes trailing blanks and tabs from each line of input
    and deletes entirely blank lines */

#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */

int getline(char line[], int maxline);
int reveal(char s[]);
void copy(char to[], char from[]);

main()
{
    int len;        /* current line length */
    char line[MAXLINE]; /* current input line */

    while ((len = getline(line, MAXLINE)) > 0)
    {
        for (--len; line[len] == ' ' || line[len] == '\t' || line[len] == '\n'; --len)
        {
            ;
        }
        line[len + 1] = '\0';
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

/* Helper function to see if we have succeded */ 
int reveal(char s[])
{
    int i;

    for (i = 0; s[i] != '\0' ; ++i)
    {
        if (s[i] == ' ')
        {
            s[i] = 'S';
        }
        else if (s[i] == '\t')
        {
            s[i] = 't';
        }
        else if (s[i] == '\b')
        {
            s[i] = 'b';
        }
        else if (s[i] == '\\')
        {
            s[i] = '\\';
        }
    }

    return i;
}