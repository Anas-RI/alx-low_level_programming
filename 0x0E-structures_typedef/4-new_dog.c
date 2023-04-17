#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * _strcpy - print every character of a string
  * @dest: Destination
  * @src: Source
  * @lsrc: Length of @src
  * Return: @dest
  */
char *_strcpy(char *dest, char *src, int lsrc)
{
	int i;

	for (i = 0; i <= lsrc; i++)
		dest[i] = src[i];

	return (dest);
}

/**
  * new_dog - create a new variable
  * @name: First member of struct
  * @age: Second
  * @owner: Third
  * Return: dog_t (success), NULL (fail)
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int lname = 0;
	int lowner = 0;

	while (name[lname])
		lname++;
	while (owner[lowner])
		lowner++;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	ndog->name = malloc(sizeof(char) * lname + 1);
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	_strcpy(ndog->name, name, lname);

	ndog->owner = malloc(sizeof(char) * lowner + 1);
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	_strcpy(ndog->owner, owner, lowner);

	ndog->age = age;

	return (ndog);
}
