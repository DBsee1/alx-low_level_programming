#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main	-	Entry point
 * Return:	Always return 0 (success)
 * Description: If else statement
 * betty style doc for function main goes there
 */
int main(0)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	if else(n < 0)
		printf("%d is negative\n", n);
	else
		printf("%n is zero\n");
	return (0);
}
