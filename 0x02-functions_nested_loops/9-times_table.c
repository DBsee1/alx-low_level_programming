#include "main.h"

/**
 * times_table	-	a function that prints the 9 times table, starting with 0;
 * row: rows of the time table;
 *
 * col: column of the time table;
 *
 * dc: digit of the current result;
 *
 * Return:	Return times table;
 */

void times_table(void)
{
	int row, col;
	int dc;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (col = 1; col <= 9; col++)
		{
			dc = (row * col);
			if ((dc / 10) > 0)
			{
				_putchar((dc / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((dc % 10) + '0');

			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
