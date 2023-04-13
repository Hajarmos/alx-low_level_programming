#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of args
 * @av: pointer to array of args
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int len = 0, i = 0, j, k = 0;

	if (av == 0 || av == NULL)
		return (0);
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			len++, j++;
		i++, len++;
	}
	len++;
	str = (char *)malloc(sizeof(char) * len);
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			str[k] = av[i][j], j++, k++;
		str[k] = '\n', k++, i++;
	}
	str[k] = '\0';
	return (str);
}
