/* This program includes a function reverse(s) that reverses
   a character string */

#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */

int getline(char line[], int maxline);
void copy(char to[], char from[]);
void reverse(char s[]);

main()
{
    int len;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0)
    {
        reverse(line);
        printf("%s\n", line);
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

void reverse(char s[])
{
    char temp[MAXLINE];
    int i, j;

    for (i = 0; (temp[i] = s[i]) != '\0'; ++i)
    {
        ;
    }
    /* this loop is a bit crazy but it works! */
    for (--i, j = 0; i >= 0; --i, ++j)
    {
        s[i] = temp[j];
    }
}