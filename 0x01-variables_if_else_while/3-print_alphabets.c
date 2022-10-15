#include <stdio.h>

/**
 * main - print upper and lower case alpha
 *
 * Return: Always 0
 */

int main(void)
{
	char aA;

	for (aA = 'a'; aA <= 'z'; aA++)
		for (aA = 'A'; aA <= 'Z'; aA++)
	{
		putchar(aA);
	}
	putchar('\n');
	return (0);
}
