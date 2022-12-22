#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compare two strngs
 * @s1: the first string
 * @s2: the second string
 * Return: 0 if s1 and s2 are equal
 * another number if not
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, m = 0;

	while (m == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		m = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (m);
}
