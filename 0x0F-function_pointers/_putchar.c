#include <unistd.h>

/**
 * _putchar	-	a function tht write char c to stdout
 * @c:	get input
 * Return:	0;
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
