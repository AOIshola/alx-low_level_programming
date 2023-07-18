#include "dog.h"

/**
 * init_dog - initializes the variable of dog type
 * @d: dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: Nothing
*/

void init_dog(struct dog *d, char *name, float age, char *name)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
