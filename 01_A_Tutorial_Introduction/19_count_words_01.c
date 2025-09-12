#include <stdio.h>
#include <stdlib.h>

#define IN  1	/* inside a word */
#define OUT 0	/* outside a word */

/* count lines, words, and characters in input */
int main(void)
{
	int input, newline, new_word, new_char, state;	

	state = OUT;
	newline = new_word = new_char = 0;
	
	while ((input = getchar()) != EOF) {
		++new_char;	
		if (input == '\n')
			++newline;
		if (input == ' ' || input == '\n' || input == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++new_word;
		}
	}
	printf("%d %d %d\n", newline, new_word, new_char);

	return EXIT_SUCCESS;
}
