#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian,else return 1 
 */
int get_endianness(void)
{
	unsigned int x;
	char *ptr;

	x = 1;
	ptr = (char *) &x;

	return ((int)*ptr);
}
