#include "main.h"

/**
 * main	-	code entry point;
 * Description:	writint a program that print _putchar function;
 * Return:	Always Return (0);
 */

int main(void)
{
	char *ch = "_putchar";

		while (*ch)
		{
			_putchar(*ch);
			ch++;
		}
		_putchar('\n');
	return (0);
}
