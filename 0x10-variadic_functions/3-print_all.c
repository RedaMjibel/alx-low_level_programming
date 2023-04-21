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
	int i = 0, n;
	float f;
	char *z, *sep = "";
	va_list args;

n = strlen(format);
va_start(args, format);
while (i < n)
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(args, int));
break;
case 'i':
printf("%s%d", sep, va_arg(args, int));
break;
case 'f':
f = va_arg(args, double);
printf("%s%f", sep, f);
break;
case 's':
z = va_arg(args, char *);
if (z == NULL)
{
printf("%s(nil)", sep);
}
else
printf("%s%s", sep, z);
break;
default:
i++;
continue;
}
sep = ", ";
i++;
}
printf("\n");
va_end(args);
}
