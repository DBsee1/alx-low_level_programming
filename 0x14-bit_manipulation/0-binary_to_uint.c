#include "main.h"

/**
 * binary_to_uint - converting a binary number to an
 * unsigned integer.
 * @binary: binary.
 *
 * Return: unsigned integer.
 */
unsigned int binary_to_uint(const char *binary)
{
	unsigned int un_int;
	int len, base_two;

	if (!binary)
		return (0);

	un_int = 0;

	for (len = 0; binary[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (binary[len] != '0' && binary[len] != '1')
		{
			return (0);
		}

		if (binary[len] & 1)
		{
			un_int += base_two;
		}
	}

	return (un_int);
}
