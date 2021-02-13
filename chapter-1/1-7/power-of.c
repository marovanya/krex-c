/* a function to raise int m to the power of int n
   and a program to exercise it */

#include <stdio.h>

int power(int m, int n);

/*test power function */
main()
{
    int i;

    for (i = 0; i < 10; ++i)
    {
        printf("%d %d %d\n", i, power(2, i), power(-3,i));
    }
    
    return 0;   /* we have unlocked return 0! :D
}

/* power: raise b to n-th power; n>= 0 */
int power(int base, int n)
{
    int i, p;

    p = 1;
    for (i = 1; i <= n; ++i)
    {
        p = p * base;
    }
    return p;
}