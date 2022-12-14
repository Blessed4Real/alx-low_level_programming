#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @i: digit to be sought
 *
 * Return: value of the last digit of number
 */
int print_last_digit(int i)
{
	int last;

	last = i % 10;
	if (last < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');

	return (last);
}
