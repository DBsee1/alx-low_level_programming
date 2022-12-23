#include "main.h"

/**
 * _strcmp	-	 a function that compares two strings.
 * @s1:	comparing string input
 * @s2: comparing string lexicograph
 * Return: return an int;
 */
int _strcmp(char *s1, char *s2)
{
	int ressult = 0;

	while (result == 0 && *s1 != '\0' && *s2 != '\0')
	{
		result = *s1 - *s2;
		s1++;
		s2++;
	}

	if (result == 0)
	{
		result = *s1 - *s2;
	}
	return (result);
}
