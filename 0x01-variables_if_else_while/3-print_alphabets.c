#include <stdio.h>
/**
 * main	-	Entry point
 * Return:	Always return 0 (success)
 * Description: If else statement
 * betty style doc for function main goes there
 */
int main(void)
{
	char c, d;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	for (d = 'A'; d <= 'Z'; ++d)
		putchar(d);
	putchar(10);
	return (0);
}
