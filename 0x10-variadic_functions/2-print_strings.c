#include "variadic_functions.h"
/**
 * print_strings - prints, strings followed by new line
 * @separator: string to be printed between the strings
 * @n: number of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ls;
	unsigned int i;
	char *temp;

	va_start(ls, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(ls, char*);
		printf("%s", temp ? temp : "(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ls);
}
