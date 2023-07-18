#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create new dog of type dog_t
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	int a = 0, b =  0, c = 0;
	dog_t *dog;

	while (name[a] != '\0')
		a++;
	while (owner[b] != '\0')
		b++;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = malloc(sizeof(dog->name) * a);
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (c = 0; c <= a; c++)
		dog->name[c] = name[c];

	dog->age = age;

	dog->owner = malloc(sizeof(dog->owner) * b);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (c = 0; c <= b; c++)
		dog->owner[c] = owner[c];
	return (dog);

}
