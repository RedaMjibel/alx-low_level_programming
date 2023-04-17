#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog  - initializes a var of type dog
 * @d: dog struct
 * @name: name of the dog
 * @age: age of a dog
 * @owner: the owner of the dog
 *
 * Description: The attributes of a dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
