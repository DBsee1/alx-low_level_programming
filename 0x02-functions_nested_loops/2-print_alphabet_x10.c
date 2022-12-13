#include<stdio.h>
#include<main.h>

/**
 * main	-	code entry point;
 *
 * Description:	writint a program that print _putchar function;
 *
 * Return:	Always Return (0);
 *
 * print_alphabet -	prints alphabet;
 * void:	void;
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}

int main(void)
{
	print_alphabet_x10();
	_putchar('\n');
	return (0);
}
