#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of string
 * @s: string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a])
	{
		a++;
	}
	return (a);
}

/**
 * _strcpy - copies the string pointed to by src
 * @src: source
 * @dest: destination
 *
 * Return: value of pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	if (src == '\0')
	{
		return ('\0');
	}
	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dog_new;
	int namelength;
	int ownerlength;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	dog_new = malloc(sizeof(struct dog));
	if (dog_new == NULL)
	{
		return (NULL);
	}
	namelength = _strlen(name);
	dog_new->name = malloc(sizeof(char) * (namelength + 1));
	if (dog_new->name == NULL)
	{
		free(dog_new);
		return (NULL);
	}
	dog_new->name = _strcpy(dog_new->name, name);
	ownerlength = _strlen(owner);
	dog_new->owner = malloc(sizeof(char) * (ownerlength + 1));
	if (dog_new->owner  == NULL)
	{
		free(dog_new->name);
		free(dog_new);
		return (NULL);
	}
	dog_new->owner = _strcpy(dog_new->owner, owner);
	dog_new->age = age;
	return (dog_new);
}
