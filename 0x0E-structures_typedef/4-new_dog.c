#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog and stores it in memory
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
int namel = 0, ownl = 0;

if (name != NULL && owner != NULL)
{
	namel = strlen(name) + 1;
	ownl = strlen(owner) + 1;
	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * namel);
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * ownl);
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	new_dog->name = strcpy(new_dog->name, name);
	new_dog->owner = strcpy(new_dog->owner, owner);
	new_dog->age = age;
}
return (new_dog);
}
