/* This is a program that reads a set of text lines and prints the
   longest
   UPDATE: uses external variables */

#include <stdio.h>

#define MAXLINE 1000    /* maximum input line size */

int max;                /* maximum length seen so far */
char line[MAXLINE];     /* current input line */
char longest[MAXLINE];  /* longest line saved here */

int getline(void);
void copy(void);

/* print longest input line; especialized version */
main()
{
    int len;
    extern int max;
    extern char longest[];

    max - 0;
    while ((len = getline()) > 0)
    {
        if (len > max)
        {
            max = len;
            copy();
        }
    }
    if (max > 0)    /* there was a line */
    {
        printf("%s\n", longest);
    }
}

/* getline: read a line into s, return length */
int getline(void)
{
    extern char line[MAXLINE];
    int c, i;

    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        line[i] = c;
    }
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(void)
{
    extern char line[MAXLINE];
    extern char longest[MAXLINE];
    int i;

    i = 0;
    while ((longest[i] = line[i]) != '\0')
    {
        ++i;
    }
}