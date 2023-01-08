#include <stdio.h>

/**
 * main	-	Write a program that prints the number of arguments passed into it.
 * @argc:	argument(int);
 * @argv:	array of string pointing to char
 * Return:	Always return (0) success
 */

int main(int argc, char argv __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
