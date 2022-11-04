#include "main.h"

/**
 * _memset - function fill the first @n bytes of the memory area pointed
 * to by @s with the constant byte @b
 *
 * @n: bytes of the memory area pointed to by @s
 *
 * @s: with the constant byte @b
 *
 * @b: memory area pointer
 *
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *s;
	int n, i;
	int b;

	while
		(i < n)
		{
			i++;
			s[i] = b;
		}
	return (s);
}
