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
	char temp = s[0];
	int len = 0;
	int i;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	for (i = 0; i < len; i++)
	{
		len--;
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;
	}

}
