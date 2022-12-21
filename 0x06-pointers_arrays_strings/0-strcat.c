#include "main.h"

/**
 * _strcat	-	a function that concatenates two strings.
 *
 * @dest: takes an input ;
 * @src: takes an input ;
 *
 * Return:	return concatenates string;
 */
char *_strcat(char *dest, char *src)
{
	char *end_of_str = dest;

	while (*end_of_str != '\0')
	{
		end_of_str++;
	}
	/* append src to dest */
	while (*src != '\0')
	{
		*end_of_str = *src;
		end_of_str++;
		src++;
	}
	*end_of_str = '\0';
	return (dest);
}
