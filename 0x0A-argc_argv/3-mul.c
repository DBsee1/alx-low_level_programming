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
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
