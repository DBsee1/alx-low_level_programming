#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main	-	Entry point
 * Return:	Always return 0 (success)
 * Description: If else statement
 * betty style doc for function main goes there
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');
	putchar(10);
	return (0);
}
