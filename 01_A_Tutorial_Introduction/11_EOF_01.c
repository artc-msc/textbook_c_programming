#include <stdio.h>
#include <stdlib.h>

/* Test whether (getchar() ! = EOF) evaluates to 0 or 1 */
int main(void)
{
	int eof_test;
	eof_test = getchar() != EOF;

	printf("%d\n", eof_test);
	return EXIT_SUCCESS;
}
