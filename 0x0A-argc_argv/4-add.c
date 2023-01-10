#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main	-	(des) Write a program that adds positive numbers.
 * @argc:	numbers of argumant
 * @argv:	string of array pointing to char
 * Return:	Return (0) success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i, j;
	int result = 0;

	for (i = 1; argv[i]; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
