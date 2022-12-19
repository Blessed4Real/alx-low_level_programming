#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 * Return: Always 0
 */

void rev_string(char *s)
{
	int i = 0, r = 0;
	char str[500];

	while (*(s + i))
	{
		*(str + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(str + r);
		r++;
		i--;
	}
}
