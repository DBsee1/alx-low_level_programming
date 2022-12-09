#include <stdio.h>
#include <unistd.h>
/**
 *main -	Entry	point	of	our	code;
 *
 *Description:	Print	a	stiring	to	a	std	err;
 *
 *
 *Return:	always	1	(err);
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
