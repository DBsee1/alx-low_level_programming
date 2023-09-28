#include "main.h"

/**
 * set_bit - sets the value bit to 1.
 * at a given index.
 * @ptr_lng_int: pointer of an unsigned long int.
 * @indx: index of the bit.
 *
 * Return: 1 if successfull, -1 unsuccessful.
 */
int set_bit(unsigned long int *ptr_lng_int, unsigned int indx)
{
	unsigned int bitmask;

	if (indx > 63)
		return (-1);

	bitmask = 1 << indx;
	*ptr_lng_int = (*ptr_lng_int | bitmask);

	return (1);
}
