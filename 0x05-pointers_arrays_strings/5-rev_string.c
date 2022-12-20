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
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	for (i = 0; i < len / 2; i++)
	{
		char temp = s[i];

		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;

	}
}
