#include "main.h"
/**
 * _pow_recursion - return the value of x raised tothe power of y
 * @x: the base
 * @y: the exponent
 * Return: value of the exponential
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
