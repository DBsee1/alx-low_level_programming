#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps two integers
 * @a: first integer
 * @b: second integer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
