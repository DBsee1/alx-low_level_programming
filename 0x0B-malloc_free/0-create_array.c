#include <stdio.h>
#include <stdlib.h>

/**
 * create_array	-	a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size input ;
 * @c:	char
 * Return:	Always return (0) success
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
