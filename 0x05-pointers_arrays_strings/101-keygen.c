#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * keygen - generates a random passowrd
 * @dest: parameter
 * Return: random passowrd
 */
int main()
{
char randp[84];
srand(time(NULL));
randp[84] = rand();
printf("Tada! Congrats %s\n", randp);
return (0);
}
