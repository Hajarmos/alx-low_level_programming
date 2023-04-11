#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min number of coins to make change
 * for an amount of money
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */


int main(int argc, char **argv)
{
	int cents, res = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		if (cents / 25)
		{
			res += (cents / 25);
			cents = cents % 25;
		}
		if (cents / 10)
		{
			res += (cents / 10);
			cents = cents % 10;
		}
		if (cents / 5)
		{
			res += (cents / 5);
			cents = cents % 5;
		}
		if (cents / 2)
		{
			res += (cents / 2);
			cents = cents % 2;
		}
		if (cents)
			res += cents;
		printf("%d\n", res);
		return (0);
	}
}
