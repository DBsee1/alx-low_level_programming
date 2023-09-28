#include "main.h"

/**
 * get_bit - Value of a bit at a given index.
 * @lng_int: unsigned long int input.
 * @indx: index of the bit.
 *
 * Return:bit value.
 */
int get_bit(unsigned long int lng_int, unsigned int indx)
{
	unsigned int i;

	if (lnt_int == 0 && indx < 64)
		return (0);

	for (i = 0; i <= 63; lng_int >>= 1, i++)
	{
		if (indx == i)
		{
			return (lng_int & 1);
		}
	}

	return (-1);
}
