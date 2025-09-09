#include <stdio.h>
#include <stdlib.h>

/* copy input to output and remove extra blanks */
int main(void)
{
	int input, blanks;
	blanks = 0; // start at 1 as it's

	while ((input = getchar()) != EOF) {
		if (input != ' ') {
			putchar(input);
			blanks = 0;
		}
		else if (blanks < 1) {
			++blanks;
			putchar(input);
		}
		else 
			++blanks;
	}
	return EXIT_SUCCESS;
}
