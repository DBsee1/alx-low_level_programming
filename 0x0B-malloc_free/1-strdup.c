#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup	-	a function that returns a pointer to a newly allocated
 * space in memory,which contains a copy of the string given as a parameter.
 * @str:	take a string pointing to char
 * Return:	Dupli.
 */

char *_strdup(char *str)
{
	int strl;
	char *duplicate;

	if (str == NULL)
		return (NULL);
	strl = strlen(str) + 1;
	duplicate = malloc(sizeof(char) * strl);
	if (duplicate == NULL)
		return (NULL);

	strncpy(duplicate, str, strl);
	return (duplicate);
}
