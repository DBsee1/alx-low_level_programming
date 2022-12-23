#include "main.h"

/**
 * _strncpy	-	function that copies a string.
 * @dest:	cpy string from another buffer;
 * @src:	takes input as a string;
 * @n:		takes an int;
 * Return:	return  strcpy;
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] = '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
