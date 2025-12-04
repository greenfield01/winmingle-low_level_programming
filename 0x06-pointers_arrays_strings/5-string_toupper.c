#include "main.h"

/**
 * string_toupper - to upper case
 * @s: change this string to upper
 * Return: return upper case x
 */

char *string_toupper(char *x)
{
	int i;

	for (i = 0; x[i] != '\0'; i++)
	{
		if (x[i] >= 'a' && x[i] <= 'z')
			x[i] = x[i] - 32;
	}

	return (x);
}
