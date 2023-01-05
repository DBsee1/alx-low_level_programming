#include "main.h"

/**
 *_sqrt_recursion -	a function that returns the natural square root of a number
 *@n:	takes an int as input
 *Return: Always return (0) success
 */

int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
		return (-1);
	if ((n == 0) || (n == 1))
		return n;

	for (i = 2; i <= n/2; i++)
	{
		if (i * i == n)
			return (i);
	}

	return (-1);
}
