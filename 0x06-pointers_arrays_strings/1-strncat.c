#include "main.h"

/**
 * _strncat	-	function that concatenates two strings.
 * @dest:	takes an input;
 * @src:	take input;
 * @n:		take input(int);
 * Return:	concantenated string;
 */

char *_strncat(char *dest, char *src, int n)
{
	char  *end = dest;
	int i;

	while (*end != '\0')
	{
		end++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*end = src[i];
		end++;
	}
	*end = '\0';
	return (dest);
}
