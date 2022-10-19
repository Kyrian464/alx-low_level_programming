#include "main.h"

/**
 * print_sign - program that prints sign of a number
 * @n: parameter to be checked
 * Return: returns + if positive
 *         - if negative and
 *         0 if zero
 */

int print_sign(int n)
{

	if (n > 0)
	{
	_putchar('+');
	return (1);
	}

	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}

	else
	{
	_putchar('-');
	return (-1);
	}
}
