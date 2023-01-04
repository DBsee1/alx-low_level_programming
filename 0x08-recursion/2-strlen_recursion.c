#include "main.h"

/**
 *_strlen_recursion	-	a function tht print the lenght of a string
 *@s:	take in a string as an input
 *Return:	Always return (0) successs:
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
		(return (1) + _strlen_recursion(s + 1));
}
