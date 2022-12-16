#include "main.h"

/**
 * _isdigit - checks for a digit
 * @b: to check for digit
 * Return: 1 if digit, 0 if not digit
 */

int _isdigit(int b)
{
	if (b >= '0' && b <= '9')
		return (1);
	return (0);
}
