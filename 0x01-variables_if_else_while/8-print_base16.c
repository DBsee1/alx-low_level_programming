#include <stdio.h>
/**
 * main	-	Entry point
 * Return:	Always return 0 (success)
 * Description: If else statement
 * betty style doc for function main goes there
 */
int main(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
		putchar(i % 10 + '0');
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
