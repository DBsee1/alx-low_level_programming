#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings	-	 a funtion that print strings
 * @separator:	char
 * @n:	size of the element;
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);
		if (str != NULL)
		{
			printf("%s", str);
		}
		printf("(nil)");

		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");
}
