#include <stdio.h>
#include <stdlib.h>

#define WORD_MAX 12 

// Make a histogram (bar graph) to show the length of words
// This program does not account for punctuation 
int main(void)
{
	int input, word_length, index, bars;
	int	word_count[WORD_MAX];	
	word_length = bars = 0;

	// set array to 0 
	for (index = 0; index < WORD_MAX; ++index)
		word_count[index] = 0;

	// count word length
	while ((input = getchar()) != EOF) {
		if (input != ' ' && input != '\t' && input != '\n')
			++word_length;
		else {
			word_count[word_length - 1] += 1;
			word_length = 0;
		}
	}

	// print histogram
	printf("Word length:\n");
	printf("------------\n");
	for (index = 0; index < WORD_MAX; ++index) {
		printf("%2d:", index + 1);
		while (bars < word_count[index]) {
			putchar('|');
			++bars;
		}
		putchar('\n');
		bars = 0;
	}
	
	return EXIT_SUCCESS;
}
