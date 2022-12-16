#include "main.h"

/**
 * print_diagonal - draws a diagonal line o the terminal
 * @n: number of times character is printed
 * Return: 0
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
