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
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = strdup(name);
	new_dog->owner = strdup(owner);

	new_dog->age = age;

	return (new_dog);
}
