#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function
 * @argc: count of arg
 * @argv: array of input arg
 * Return: 0 success or 1 error or 2 error
 */
int main(int argc, char **argv)
{
	int i, n_byte;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (n_byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	n_byte = atoi(argv[1]);
	for (i = 0; i < n_byte; i++)
	{
		if (i == (n_byte - 1))
		{
			printf("%02x\n", ((unsigned char *)main)[i]);
			return (0);
		}
		printf("%02x ", ((unsigned char *)main)[i]);
	}
}
