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
int randp;
srand(time(NULL));
randp = rand();
printf("Tada! Congrats %d\n", randp);
return (0);
}
