#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat   -       get ends of input and adds together for size
 * @s1: input one to concate
 * @s2: input one to concate
 * Return: concate of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int size;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = strlen(s1) + strlen(s2) + 1;
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
	{
		arr[i] = s1[i];
	}

	for (j = 0; s2[j]; j++)
	{
		arr[i + j] = s2[j];
	}
	arr[i + j] = '\0';
	return (arr);

}
