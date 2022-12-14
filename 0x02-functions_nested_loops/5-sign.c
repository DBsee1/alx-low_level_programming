#include "main.h"

/**
 * print_sign	-	 prints the sign of a number;
 *@n:	takes an int;
 * Return:	Always return (0);
 */

int print_sign(int n)
{
	char c_positive = '+';
	char c_negative = '-';

	if (n > 0)
	{
		_puchar(c_positive);
	return (1);
	}
	else if (n < 0)
	{
		_putchar(c_negative);
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}
