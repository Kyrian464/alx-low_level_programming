#include "main.h"

/**
 * print_alphabet_x10 - print apha in lower case ten times
 *
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z';)

			_putchar(letter);
	}

	_putchar('\n');
}
