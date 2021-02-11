#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300; floating-point version */

main()
{
    float fahr, celsius;
    float lower, upper, step;


    printf("Temp. convert!\n");
    printf("  F      C\n");
    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
    {
        celsius = (5.0/9.0)*(fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
    }
}