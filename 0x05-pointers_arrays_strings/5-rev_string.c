#include "main.h"

/**
 * rev_string	-	function that prints a string, in reverse,
 * followed by a new line;
 * @s:	takes input (string);
 *
 * Return:	Return a string in reverse;
 */

void rev_string(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

}
