#include <stdio.h>
#include <stdlib.h>

/**
 * length - finds string length
 * @str: input pointer to string
 * Return: length of string
 */
int length(char *str)
{
	int len;

	while (*(str + len))
		len++;
	return (len);
}
/**
 * main - multipl two number 
 * @num1: number
 * @num2: number
 * Return: 0
 */

int main(int argc, char **argv)
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

