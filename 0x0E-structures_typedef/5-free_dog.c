#include <stdio.h>
#include "dog.h"

/**
 * free_dog - free the allocate of dog_t type
 * @d: variable pointer to type dog_t
 *
 * Return: Nothing
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
