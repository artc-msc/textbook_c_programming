#include <stdio.h>
#include <stdlib.h>

/* print Celsius-Fahrenheit table for fahr = -20, ..., 150; floating-point
 * version */
int main(void)
{
	float fahr, celsius;
	float lower, upper, step;

	lower = -20;	/* lower limit of temperature scale */
	upper = 150;	/* upper limit */
	step = 10;		/* step size */

	celsius = lower;

	printf("  C    F\n");
	printf("----------\n");

	while (celsius <= upper) {
		fahr = (celsius / (5.0/9.0)) + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
	return EXIT_SUCCESS;
}
