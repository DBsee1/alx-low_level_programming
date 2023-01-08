#include <stdio.h>

/**
 * main	-	Write a program that prints all arguments it receives.
 * @argc:	argument(count)
 * @argv:	argument as a str then pointing to a char
 * Return:	Always return (0);
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; argv[i]; i++)
		printf("%s\n", argv[i]);
	return (0);
}
