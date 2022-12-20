#include "main.h"

void rev_string(char *s)
{
	int i;
	int count =0;
	char *save_original_value_of_s = s;

	/* calculate the length of s */
	while(*s != '\0')
	{
		count++;
		s++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(save_original_value_of_s[i]);
	}
}
