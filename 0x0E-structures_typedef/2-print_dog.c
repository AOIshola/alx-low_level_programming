#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print a dog struct
 * @d: pointer to struct
 *
 * Return: Nothing
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	else
	{
		d->name = d->name;
		d->age = d->age;
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	else
	{
		d->owner = d->owner;
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age,
d->owner);
}
