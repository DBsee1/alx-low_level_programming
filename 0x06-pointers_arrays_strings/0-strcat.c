#include "main.h"
#include <stdio.h>

/**
 * _strcat - function that concatenates two strings
 * @dest: string that will be appended
 * @src: string to be concatenated upon
 * Return: returns pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, dest_len = 0;

	while (dest[a++])
		dest_len++;

	for (a = 0; src[a]; a++)
		dest[dest_len++] = src[a];

	return (dest);
}
