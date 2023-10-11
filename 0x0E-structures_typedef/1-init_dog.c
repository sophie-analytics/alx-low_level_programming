#include "dog.h"
#include <stddef.h>
#include <string.h>

/**
 * init_dog -Function that defines a sturcture
 * @d: Structure name
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL && name != NULL && owner != NULL)
	{
		d->name = strdup(name);
		d->owner = strdup(owner);

		if (d->name != NULL && d->owner != NULL)
		{
			d->age = age;
		}
		else
		{
			;
		}
	}
	else
	{
		;
	}
}
