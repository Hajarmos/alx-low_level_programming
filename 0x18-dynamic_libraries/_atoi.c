#include "main.h"
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
 * _calloc -  allocates memory for an array
 * @nmemb: number of elements
 * @size: size of elements
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *all;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);
	all = malloc(size * nmemb);
	if (all == NULL)
		return (NULL);
	for (i = 0; i < size * nmemb; i++)
		*(all + i) = 0;
	return ((void *)all);
}

/**
 * is_number - check the string is number
 * @s: string
 * Return: 1if is number or 0 if not
 */

int is_number(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) <= 57 && *(s + i) >= 48)
			i++;
		else
			return (0);
	}
	return (1);
}

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}

		if (isi == 1)
		{
			break;
		}

		c++;
	}

	ni *= min;
	return (ni);
}

/**
 * print_mul - prints my array
 * @sum_result: pointer to int array with numbers to add
 * @len_r: length of result array
 * Return: void
 */
void print_mul(int *mul_result)
{
	int i = 0, n;

	while (*(mul_result + i))
	{
		n = mul_result[i] + 48;
		_putchar(n);
		i++;
	}
	_putchar('\n');
}

/**
 * main - multipl two number
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int num1, num2, mul, cp, size = 1, n, i = 0;
	int *ptr;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	mul = num1 * num2;
	cp = mul;
	while (cp / 10)
	{
		cp /= 10;
		size++;
	}
	ptr = _calloc(size, sizeof(int));
	while (mul / 10)
	{
		n = mul % 10;
		ptr[size - 1] = n;
		mul /= 10;
		size--;
	}
	ptr[0] = mul % 10;
	while (*(ptr + i))
        {
		_putchar(ptr[i] + '0');
		i++;
	}
	_putchar('\n');
	return (0);
}
