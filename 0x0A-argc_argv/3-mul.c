#include <stdio.h>
#include <stdlib.h>

/**
 *main	-	Write a program that multiplies two numbers.
 *@argc:	numbers of args
 *@argv:	string of arrray pointing to char
 *Return:	Always return (0) success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, "Error\n");
		return (1);
	}
	int result;

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
