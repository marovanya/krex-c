/* rewrites temperature conversion program to use temperature for conversion */

#include <stdio.h>

#define LOWER 0     /* lower limit of table */
#define UPPER 300   /* uppwe limit */
#define STEP 20     /* step size */

float fahrToCelsius(float fahr);
float celsiusToFahr(float celsius);

main()
{
    float fahr, celsius;

    printf("Temp. convert!\n");
    printf("  F      C\n");
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("%3.0f %6.1f\n", fahr, fahrToCelsius(fahr));
    }

    return 0;
}

float fahrToCelsius(float fahr)
{
    return (5.0/9.0) * (fahr - 32.0);
}

float celsiusToFahr(float celsius)
{
    return (celsius * (9.0/5.0)) + 32;
}