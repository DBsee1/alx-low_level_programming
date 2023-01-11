#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup	-	a function that returns a pointer to a newly allocated
 * space in memory,which contains a copy of the string given as a parameter.
 * @str:	take a string pointing to char
 * Return:	Dupli.
 */

char *_strdup(char *str)
{
	int strlen;
	char *duplicate;

	if (str == NULL)
		return (NULL);
	strlen = strlen(str) + 1;
	duplicate = malloc(sizeof(char) * strlen);
	if (duplicate == NULL)
		return (NULL);

	strncpy(duplicate, str, strlen);
	return (duplicate);
}
