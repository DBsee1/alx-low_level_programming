#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator	-	a function that executes a function given as a parameter
 * on each element of an array.
 * @array:	takes int arr
 * @size:	size of arr
 * @action:	funtion pointer
 * Return:	0;
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
		return;

	if (size < 0)
		return;
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
