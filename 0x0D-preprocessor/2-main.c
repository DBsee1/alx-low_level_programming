#include <stdio.h>

/**
 * main - main code entry
 * Description:	a program that prints the name of the file it was
 * compiled from, followed by a new line.
 * Return:	Return (0) success
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
