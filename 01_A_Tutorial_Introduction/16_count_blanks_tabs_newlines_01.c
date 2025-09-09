#include <stdio.h>
#include <stdlib.h>

int main()
{
	int input, blank, tab, newline;
	blank = tab = newline = 0;

	while ((input = getchar()) != EOF) {
		if (input == ' ')
			++blank;	
		if (input == '\t')
			++tab;
		if (input == '\n')
			++newline;
	}
	printf("Blanks: %d\n", blank);
	printf("Tabs: %d\n", tab);
	printf("New lines: %d\n", newline);

	return EXIT_SUCCESS;
}
