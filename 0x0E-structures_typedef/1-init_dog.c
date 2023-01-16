#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog	-	a function that initialize a variable of type;
 * @d:	struct dog variable;
 * @name:	Dog name;
 * @age:	dog age;
 * @owner:	dog owner;
 * Return:	exit(exit_success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if  (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
			return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
