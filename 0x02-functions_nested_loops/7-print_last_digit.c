#include "main.h"

/**
 *print_last_digit	-	prints the last digit of a number;
 *@n:				collect an int;
 * Return:	Always return (0);
 */

int print_last_digit(int n)
{
	putchar(n % 10 + '0');
	return (n);
}
