#include "dog.h"
#include <stddef.h>

/**
 * init_dog - function that initialize variable
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * @d: initial of struct
 * return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
