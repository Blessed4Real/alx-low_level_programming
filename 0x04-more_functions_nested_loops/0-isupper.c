#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @b: character to check for case
 * Return: 1 if uppercase, 0 if not uppercase
 */

int _isupper(int b)
{
	if (b >= 'A' && b <= 'Z')
		return (1);
	return (0);
}
