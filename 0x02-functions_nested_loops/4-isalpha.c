#include "main.h"
/**
 * _isalpha	-	 checks for alphabetic character.
 * @c:	take a character;
 * Return:	Always Return (0);
 */

int _isalpha(int c)
{
	if ((c >= 'a') && (c <= 'b') || (c >= 'A') && (c <='Z'))
		return (1);
	else
		return (0);
}
