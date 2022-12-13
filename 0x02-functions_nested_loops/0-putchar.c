#include<stdio.h>
#include<main.h>

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
			putchar(*ch);
			ch++;
		}
	putchar('\n');
	return (0);
}
