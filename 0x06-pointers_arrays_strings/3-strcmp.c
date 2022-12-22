#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if s1 and s2 are equal and any number if not
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0;

	while (a == 0)
	{
		if ((*(s1 + a) == '\0') && (*(s2 + a) == '\0'))
			break;
		b = *(s1 + a) - *(s2 + a);
		a++;
	}

	return (b);
}
