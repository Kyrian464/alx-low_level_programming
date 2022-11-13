#include <stdio.h>

/**
 * main - Entry point
 * @argc: - argument count
 * @argv: - argument array of strings
 *
 * Return: 0 is success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		i++;
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
