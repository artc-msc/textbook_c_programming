#include <stdio.h>
#include <stdlib.h>

/* copy input to output; 1st version */
int main(void)
{
	int c;

	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
	return EXIT_SUCCESS;
}
