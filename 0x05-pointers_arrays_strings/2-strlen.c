#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: input string
 * Return: length of s
 */

int _strlen(char *s)
{
	int m = 0;

	while (*(s + m))
		m++;
	return (m);
}
