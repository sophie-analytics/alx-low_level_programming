#include <stddef.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Create a new dog structure
 * @name: name of the new dog
 * @age: age of the dog
 * @owner: new dog owner
 * Return: The result
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}

	newDog->name = (char *)malloc(strlen(name));

	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	strcpy(newDog->name, name);

	newDog->owner = (char *)malloc(strlen(owner));

	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	strcpy(newDog->owner, owner);
	newDog->age = age;

	return (newDog);
}
