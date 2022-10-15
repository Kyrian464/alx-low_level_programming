#include <stdio.h>

/**
 * main - Print alphabets except e and q
 *
 * Return: Always 0
 */

int main(void)
{
	char qe;

	for (qe = 'a'; qe <= 'z'; qe++)
	{
		if (qe != 'q' && qe != 'e')
		putchar(qe);
	}
	putchar('\n');

	return (0);
}
