#include <stdio.h>
#include <stdlib.h>

/* copy input to output; 1st version */
int main(void)
{
	int input;

	input = getchar();
	while (input != EOF) {
		putchar(input);
		input = getchar();
	}
	return EXIT_SUCCESS;
}
