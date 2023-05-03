#include "3-calc.h"


/**
 * main - calcul two variables with op
 * @argc: argument count
 * @argv: arguments array
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	int res;

	if (argc == 4)
	{
		res = (get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
		printf("%d\n", res);
		return (0);
	}
	printf("Error\n");
	exit(98);
}
