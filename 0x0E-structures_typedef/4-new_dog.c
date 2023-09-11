#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Returns the length of a string
 * @s: string to count
 *
 * Return: String length
 */

int _strlen(char *s)
{
	int v = 0;

	while (*s != '\0')
	{
		v++;
		s++;
	}

	return (v);
}

/**
 * _strcpy - copies the string pointed
 * @src: source value
 * @dest: Destination value
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int v;

	for (v = 0; src[v] != '\0'; v++)
	{
		dest[v] = src[v];
	}

	dest[v++] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to the dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->name = _strcpy(new_dog->name, name);

	new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = _strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}
