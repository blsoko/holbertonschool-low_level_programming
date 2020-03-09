#include "dog.h"

/**
 * init_dog - Entry point
 *
 * @d: parameter
 * @name: name of dog
 * @age: age of dog
 * @owner: owner dog
 *
 * Return: Always 0 (Success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
