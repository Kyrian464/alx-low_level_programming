#include "main.h"

/**
 *_isalpha - program that checks for aphabets
 * @c: parameter to be checked
 * Return: return 1 if its an alphabet, otherwise 0.
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	else if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
