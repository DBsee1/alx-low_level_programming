#include "main.h"

/**
 * jack_bauer	-	prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59;
 *
 * return:	Always Return (0);
 */

void jack_bauer(void)
{
	int H, M

		for (H = 0; H <= 24; H++)
		{
			for (M = 0; M <= 60; M++)
			{
				_Putchar(H / 10 + '0');
				_Putchar(H % 10 + '0');
				_putchar(':');
				_Putchar(M / 10 + '0');
				_Putchar(M % 10 + '0');
			}

		}
}
