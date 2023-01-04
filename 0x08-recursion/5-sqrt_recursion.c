#include "main.h"

/**
 *_sqrt_recursion -	a function that returns the natural square root of a number
 *@n:	takes an int as input
 *Return: Always return (0) success
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if ((n == 0) || (n == 1))
		return (1);
	int i;

	for (i = 0; i * i <= n; i++)
	{
		if (i * i == n)
			return (i);
	}

	return (-1);
}
