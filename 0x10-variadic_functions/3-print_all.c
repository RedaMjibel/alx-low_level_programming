#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - prints anything, followed by a new line
 * @format: type of arguments
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int i = 0, n, y;
	float f;
	char x;
	char *z, *sep = "";
	va_list args;

	n = strlen(format);
	va_start(args, format);
	while (i < n)
	{
		if (format[i] == 'c')
		{
			x = va_arg(args, int);
			printf("%s%c", sep, x);
		}
		else if (format[i] == 'i')
		{
			y = va_arg(args, int);
			printf("%s%d", sep, y);
		}
		else if (format[i] == 'f')
		{
			f = va_arg(args, double);
			printf("%s%f", sep, f);
		}
		else if (format[i] == 's')
		{
			z = va_arg(args, char *);
		if (z == NULL)
		{
			printf("%s(nil)", sep);
		}
		else
			printf("%s%s", sep, z);
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
