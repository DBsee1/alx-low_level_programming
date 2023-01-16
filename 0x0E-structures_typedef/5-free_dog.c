#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_dog	-	a function that free dog
 * @d:	 struct varaible
 * Return:	0
 */

void free_dog(dog_t *d)
{
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return;
	free(d);
}
