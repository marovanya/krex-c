#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300; floating-point version */

#define LOWER 0     /* LOWER limit of table */
#define UPPER 300   /* uppwe limit */
#define STEP 20     /* STEP size */

main()
{
    float fahr, celsius;

    printf("Temp. convert!\n");
    printf("  F      C\n");
    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
    {
        celsius = (5.0/9.0)*(fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
    }
}