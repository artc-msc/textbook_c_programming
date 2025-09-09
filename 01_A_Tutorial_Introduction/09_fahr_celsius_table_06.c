#include <stdio.h>
#include <stdlib.h>

#define LOWER_TEMP 0
#define UPPER_TEMP 300
#define TEMP_INCREMENT 20

/* print Fahrenheit-Celsius table with macros */ 
int main(void)
{
	int fahr;
	
	for (fahr = LOWER_TEMP; fahr <= UPPER_TEMP; fahr = fahr + TEMP_INCREMENT)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

	return EXIT_SUCCESS;
}
