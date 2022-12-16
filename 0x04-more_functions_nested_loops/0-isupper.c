#include "main.h"
#include<stdio.h>

/**
 *_isupper	-	Write a function that checks for uppercase character;
 *
 *@c:	Takes a char input;
 *Returns 1 if c is uppercase;
 *Returns 0 otherwise;
 *
 * Return:	Return (0) if successfull;
 */

int _isupper(int c)
{

	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);

}
