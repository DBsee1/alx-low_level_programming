#include "main.h"

/**
 * _print_rev_recursion	-	 a function that print a string in rev;
 * @s:	take a string as an input;
 * Return:	Always return (0) success
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
