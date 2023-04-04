#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

/**
 * set_string - sets the value of a pointer to a char.
 * @s: pointer to a pointer
 * @to: pointer to a second string
*/

void set_string(char **s, char *to)
{
*s = to;
}
