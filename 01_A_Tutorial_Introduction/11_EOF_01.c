#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int eof_test;
	eof_test = getchar() != EOF;

	printf("%d\n", eof_test);
	return EXIT_SUCCESS;
}
