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
	int i;
	int count = 0;
	char *save_original_value_of_s = s;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(save_original_value_of_s[i]);
	}
}
