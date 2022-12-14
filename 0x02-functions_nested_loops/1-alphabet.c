#include "main.h"

/**
 * print_alphabet	-	Write a function that prints the alphabet, in lowercase,
 *
 * Return:	Always Return (0)
 *
 * Does it here
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
}
