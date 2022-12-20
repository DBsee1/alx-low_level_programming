#include "main.h"
/**
 * print_rev	-	a function that prints a string, in reverse,
 * followed by a new line.
 *
 * @s:	take input (a string);
 * Return: Return s in rev;
 */
void print_rev(char *s)
{
	int count = 0;
	int i;

	/*find the length of a string */
	while (s != '\0')
	{
		count++;
	}

	/*print a string in reverse*/
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
