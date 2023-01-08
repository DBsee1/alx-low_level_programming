#include <stdio.h>

/**
 * main	-	Write a program that prints the number of arguments passed into it.
 * @argc:	argument(int);
 * @argv:	array of string pointing to char
 * Return:	Always return (0) success
 */

int main(int argc, char *argv __attribute__ ((unused)))
{
	int i;

	for (i = 0; i < argv; i++)
	{
	}
	printf("%d\n", i - 1);
	return (0);
}
