#include <stdio.h>

/**
 * main - print numbers in base sixteen
 *
 * Return: Always 0
 */

int main(void)
{
	int ten;
	int X;

	for (ten = 0; ten < 10; ten++)
	{
		putchar((ten % 10) + '0');
	}
	for (X = 'a'; X <= 'e'; X++)
	{
		putchar(X);
	}
	putchar('\n');

	return (0);
}
