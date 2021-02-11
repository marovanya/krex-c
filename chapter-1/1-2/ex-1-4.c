#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300; floating-point version */

main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = -20;       /* lower limit of temperature scale */
    upper = 160;     /* upper limit */
    step = 20;      /* step size */

    printf("Temp. convert!\n");
    printf("  C      F\n");
    celsius = lower;
    while (celsius <= upper)
    {
        fahr = (celsius*(9.0/5.0)) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}