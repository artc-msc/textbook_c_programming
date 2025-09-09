#include <stdio.h>
#include <stdlib.h>

/* count characters in input; 1st version */
int main(void)
{
	long new_character;

	new_character = 0;
	while (getchar() != EOF)
		++new_character;
	printf("%ld\n", new_character);

	return EXIT_SUCCESS;
}
