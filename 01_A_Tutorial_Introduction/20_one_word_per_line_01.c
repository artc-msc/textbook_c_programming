#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int input, blanks;
	blanks = 0;

	while ((input = getchar()) != EOF) {
		if (input != '\n' && input != ' ' && input != '\t') {
			putchar(input);
			blanks = 0;
		}
		else {
			++blanks;
			if (blanks < 2)
				putchar('\n');
		}
	}	
	return EXIT_SUCCESS;
}
