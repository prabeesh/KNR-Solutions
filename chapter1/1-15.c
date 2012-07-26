#include<stdio.h>

float conversion(float fahr);
main()
{
        float fahr;
        float lower, upper, step;

        lower = 0;
        upper = 300;
        step = 20;

        fahr = lower;

        while (fahr <= upper) {
                printf("%3.0f%6.1f\n", fahr, conversion(fahr));
                fahr = fahr + step;
        }
}
float conversion(float fahr)
{
	float celsius;
	celsius = 5.0 * (fahr-32.0)  / 9.0;
	return celsius;
}

