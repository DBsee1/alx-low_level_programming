#include "main.h"

/**
 *_abs	-	 a function that computes the absolute value of an integer;
 *@n:	a data type;
 * Return:	Always return (0);
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
