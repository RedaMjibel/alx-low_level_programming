#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: agruments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
int i;
unsigned int j, sum = 0;
char *ar;

if (argc > 1)
{
	for (i = 1; i < argc; i++)
	{
		ar = argv[i];
		for (j = 0; j < strlen(ar); j++)
		{
			if (ar[j] < 48 || ar[j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(ar);
		ar++;
	}
	printf("%d\n", sum);
}
else
{
	printf("0\n");
}
return (0);
}
