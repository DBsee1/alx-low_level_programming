#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: int input.
 * @x: int input.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int x)
{
	unsigned int bits;

	for (bits = 0; n || x; n >>= 1, x >>= 1)
	{
		if ((n & 1) != (x & 1))
			bits++;
	}

	return (bits);
}
