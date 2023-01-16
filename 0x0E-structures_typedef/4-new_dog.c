#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog	-	a function that creates a new dog
 * @name:	name
 * @age:	dog age
 * @owner:	owner name
 * Return:	0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	char *cpy_name, *cpy_owner;
	unsigned int i, len_name = 0, len_owner = 0;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	if (name == NULL || age <= 0 || owner == NULL)
	{
		free(ptr);
		return (NULL);
	}
	len_name = strlen(name);
	len_owner = strlen(owner);

	cpy_name = malloc(sizeof(char) * (len_name + 1));
	if (cpy_name == NULL)
		return (NULL);

	cpy_owner = malloc(sizeof(char) * (len_owner + 1));
	if (cpy_owner == NULL)
		return (NULL);

	for (i = 0; i <= len_name; i++)
	{
		cpy_name[x] = name[i];
	}

	for (i = 0; i <= len_owner; i++)
	{
		cpy_owner[x] = owner[i];
	}

	ptr->name = cpy_name;
	ptr->age = age;
	ptr->owner = cpy_owner;

	return (ptr);
}
