#include "main.h"

/**
 * puts_half - prints half of given string
 * @str: parameter
 */
void puts_half(char *str)
{
	int j = 0;
	int c;
while (str[j] != '\0')
{
j++;
}
if (j % 2 == 1)
{
c = (j - 1) / 2;
c = c + 1;
}
else
{
c = j / 2;
}
for (; c < j; c++)
{
_putchar(str[c]);
}
_putchar('\n');
}
