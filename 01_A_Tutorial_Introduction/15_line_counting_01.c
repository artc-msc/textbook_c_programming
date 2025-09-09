#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int character, new_line;

	new_line = 0;
	while ((character = getchar()) != EOF)
		if (character == '\n')
			++new_line;
	printf("%d\n", new_line);

	return EXIT_SUCCESS;
}
