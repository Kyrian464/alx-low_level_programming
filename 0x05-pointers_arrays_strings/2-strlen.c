#include "main.h"

/**
 * _strlen - print length of string
 * @s:  variable to check
 * Return: 0 success
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
