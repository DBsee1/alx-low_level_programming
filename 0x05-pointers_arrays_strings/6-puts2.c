#include "main.h"

/**
 * puts2	-	 function that prints every other character of a string,
 * starting wiht the first character, followed by a new line.
 * @str:	takes a string;
 *
 * Return: print;
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
