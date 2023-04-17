#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
  * struct dog - dog's info
  * @name: First member
  * @age: Second
  * @owner: Third
  *
  * Description: dog's informations
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
