#include <stdio.h>
#include <stdlib.h>

/* print Fahrenheit-Celsius table with for loop*/ 
int main(void)
{
	int fahr;
	
	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf("%d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

	return EXIT_SUCCESS;
}
