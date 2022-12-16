#include "main.h"
#include<stdio.h>

/**
 * _isdigit	-	a function that checks for a digit (0 through 9);
 *
 * @c:	takes an input int and checks ;
 *Return:return 1 if c is a digit , otherwise return 0;
 *
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
