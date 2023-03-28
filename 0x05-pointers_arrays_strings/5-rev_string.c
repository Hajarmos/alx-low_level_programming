#include "main.h"
/**
 * rev_string - reverses a string
 * _putchar - print each character
 * @s: char to check
 *
 * Description: This will reverse a string
 * Return: 0 is success
 */
void rev_string(char *s)
{
	int len = 0, a, b;
	char ch;

	while (s[len] != '\0')
		len++;
	a = len - 1;
	for (b = 0; a >= 0 && b < a; a--, b++)
	{
		ch = s[b];
		s[b] = s[a];
		s[a] = ch;
	}

}
