#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - gets length of string
 *
 * @str: string input
 *
 * Return: int
*/

int _strlen(const char *str)
{
	int l = 0;

	while (*str++)
		l++;
	return (l);
}

/**
 * _strcopy - copy a string
 *
 * @str: string input
 * @dest: destination
 *
 * Return: pointer
*/

char *_strcopy(char *dest, char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		dest[i] = str[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates new dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: struct or null
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
