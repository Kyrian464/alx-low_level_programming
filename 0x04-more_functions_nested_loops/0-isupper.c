#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: parameter to be checked
 * Return: 0 if upper case and 1 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
