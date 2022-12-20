#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str: string inputed
 * Return: string
 */
void puts_half(char *str)
{
	int a, half;

	a = 0;
	while (str[a] != '\0')
		a++;
	half = a / 2;

	if (a % 2 == 1)
		half++;
	while (half < a)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
