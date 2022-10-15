#include <stdio.h>
/**
 *
 * main -prints letters in lower case
 *
 * Return: Always 0
 */
int main()
{
	char c;
	for (c = 'a'; c <= 'z'; ++c)
		putchar("%c", c);
	return (0);
}
