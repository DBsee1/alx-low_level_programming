#include<stdio.h>
#include<main.h>

/**
 * main	-	code entry point;
 * Description:	writint a program that print _putchar function;
 * Return:	Always Return (0);
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'b'|| c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
