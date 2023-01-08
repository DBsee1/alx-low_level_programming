#include <stdio.h>

/**
 * main	-	Write a program that prints the number of arguments passed into it.
 * @argc:	argument(int);
 * @argv:	array of string pointing to char
 * Return:	Always return (0) success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i;
	int count = 0;

	for (i = 0; argv[i]; i++)
	{
		count = i;
		printf("%d\n", count);
	}
	return (0);
}
