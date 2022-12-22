#include "main.h"
#include <stdio.h>

/**
 * string_toupper - change all lowercase letters to uppercase
 * @p: string to be modified
 * Return: the character variable
 */

char *string_toupper(char *p)
{
	int b = 0;

	while (p[b])
	{
		if (p[b] >= 97 && p[b] <= 122)
		{
			p[b] -= 32;
		}

		b++;
	}

	return (p);
}
