#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int input;

	while ((input = getchar()) != EOF) {
		if (input == '\t') {
			putchar('\\');
			putchar('t');
		}
		else if (input == '\b') {
			putchar('\\');
			putchar('b');
		}
		else if (input == '\\') {
		   putchar('\\');
		   putchar('\\');
		}
		else 
			putchar(input);
	}
	return EXIT_SUCCESS;
}
