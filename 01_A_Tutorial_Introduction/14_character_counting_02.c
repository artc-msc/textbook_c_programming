#include <stdio.h>
#include <stdlib.h>

/* count characters in input; 2nd version with double int and for loop */
int main(void)
{
	double new_character;

	for (new_character = 0; getchar() != EOF; ++new_character)
		;
	printf("%.0f\n", new_character);

	return EXIT_SUCCESS;
}
