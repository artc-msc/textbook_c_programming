#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("\\a: \a\n");
	printf("\\b: foo\bbar\n");
	printf("\\f: foo\fbar\n");
	printf("\\r: foo\rbar\n");
	printf("\\t: foo\tbar\n");
	printf("\\v: foo\vbar\n");

	return EXIT_SUCCESS;
}
