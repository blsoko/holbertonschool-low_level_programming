#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - copy a string to string
 *
 * @s: string to copy
 *
 * Return: vector
 */

int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0' ; index++)
	{
	}
	return (index);
}

/**
 * new_dog - Entry point
 *
 * @name: parameter
 * @age: edad
 * @owner: due;o
 *
 * Return: Always 0 (Success)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	dog_t *vector;

	vector = malloc(sizeof(dog_t));
	if (vector == NULL)
	{
		return (NULL);
	}
	vector->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (vector->name == NULL)
	{
		free(vector);
		return (NULL);
	}
	vector->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (vector->owner == NULL)
	{
		free(vector->name);
		free(vector);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		vector->name[i] = name[i];
	}
	vector->name[i] = '\0';
	vector->age = age;
	for (i = 0; owner[i] != '\0'; i++)
	{
		vector->owner[i] = owner[i];
	}
	vector->owner[i] = '\0';
	return (vector);
}
