#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers	-	a function that prints numbers, followed by a new line
 * @separator:	char
 * @n:	input(int)
 * Return:	0;
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;

	va_start(ptr, n);

	unsigned int  next_num;

	printf("%d", n);
	if (separator == NULL)
		return;
	while (next_num = va_arg(ptr, int) != 0)
	{
		_putchar(separator);
		printf("%d", store_num)
	}
	_putchar('\n');
	va_end(ptr);
}
