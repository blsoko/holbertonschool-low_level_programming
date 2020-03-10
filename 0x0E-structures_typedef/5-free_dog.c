#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Entry point
 *
 * @d: parameter
 *
 * Return: Always 0 (Success)
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
