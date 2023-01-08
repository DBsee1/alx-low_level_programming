#include <stdio.h>
#include "main.h"

/**
 *main	-	 Write a program that prints its name, followed by a new line.
 * @argc:	the number of argument pass in the command line
 * @argv:	array of string pointing to char
 * Return:	Always Return (0) success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
