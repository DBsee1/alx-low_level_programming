#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0.
 * at a given index.
 * @ptr_lng_int: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if successful, else return  -1.
 */
int clear_bit(unsigned long int *ptr_lng_int, unsigned int index)
{
	unsigned int bitmask;

	if (index > 63)
		return (-1);

	bitmask = 1 << index;

	if (*ptr_lng_int & bitmask)
		*ptr_lng_int ^= bitmask;

	return (1);
}
