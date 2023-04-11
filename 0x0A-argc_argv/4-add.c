#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */


int main(int argc, char **argv)
{
	int i, x, res = 0;
	char *ch;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		x = strtol(argv[i], &ch, 10);
		if (*ch)
		{
			printf("Error\n");
			return (1);
		}
		else
			res += x;
	}
	printf("%d\n", res);
	return (0);
}
