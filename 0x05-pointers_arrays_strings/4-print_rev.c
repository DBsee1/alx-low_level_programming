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
	for (int i = _strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
