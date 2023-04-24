#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list ls;
	char *temp;
	unsigned int i = 0, skip;

	while (format && format[i])
	{
		va_start(ls, format);
		while (format[i])
		{
			skip = 0;
			switch (format[i++])
			{
			case 'c':
				printf("%c", va_arg(ls, int));
				break;
			case 'i':
				printf("%d", va_arg(ls, int));
				break;
			case 'f':
				printf("%f", va_arg(ls, double));
				break;
			case 's':
				temp = va_arg(ls, char*);
				if (temp)
				{
					printf("%s", temp);
					break;
				}
				printf("(nil)");
				break;
			default:
				skip = 1;
				break;
			}
			if (format[i] && !skip)
				printf(", ");
		}
		va_end(ls);
	}
	printf("\n");
}
