#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: agruments
 * Return: always 0
 */

int main(int argc, char **argv)
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
