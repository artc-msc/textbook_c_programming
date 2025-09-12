#include <stdio.h>
#include <stdlib.h>

/* coiunt digits, white space, others */
int main(void)
{
	int input, index, new_white, new_other;
	int new_digit[10];

	new_white = new_other = 0;
	for (index = 0; index < 10; ++index)
		new_digit[index] = 0;

	while ((input = getchar()) != EOF)
		if (input >= '0' && input <= '9')
			++new_digit[input - '0'];
		else if (input == ' ' || input == '\n' || input == '\t')
			++new_white;
		else
			++new_other;

	printf("digits =");
	for (index = 0; index < 10; ++index)
		printf(" %d", new_digit[index]);
	printf(", white space = %d, other = %d\n", new_white, new_other);

	return EXIT_SUCCESS;
}
