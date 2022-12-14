#include "main.h"

/**
 * _islower - check for lowercase characters
 * @d: character checking
 * Return: 0 or 1
 */
int _islower(int d)
{
	if (d >= 'a' && d <= 'z')
		return (1);
	else
		return (0);
}
