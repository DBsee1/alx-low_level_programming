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

	/*Find the length of the string and store a copy */
	/* of the original string pointer */
	char *temp_s = s;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	/*print a string in reverse*/
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(temp_s[i]);
	}
	_putchar('\n');
}
