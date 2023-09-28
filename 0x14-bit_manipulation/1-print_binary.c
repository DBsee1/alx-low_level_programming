#include "main.h"

/**
 * print_binary	-	The binary representation
 * of a number.
 * @lng: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int lng)
{
	if (lng >> 0)
	{
		if (lng >> 1)
			print_binary(lng >> 1);
		_putchar((lng & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
