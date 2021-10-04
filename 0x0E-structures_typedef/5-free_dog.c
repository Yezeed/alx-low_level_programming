#include "dog.h"
#include <stdlib.h>

/*8
 * free_dog - function frees dog
 * @d: freed dog
 */

void free_dog(dog_t *d)
{
	if (d!= NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
