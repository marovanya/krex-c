#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300; floating-point version */

#define LOWER 0     /* lower limit of table */
#define UPPER 300   /* uppwe limit */
#define STEP 20     /* step size */

main()
{
    float fahr, celsius;

    printf("Temp. convert!\n");
    printf("  C      F\n");
    celsius = LOWER;
    while (celsius <= UPPER)
    {
        fahr = (celsius*(9.0/5.0)) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + STEP;
    }
}