#include "main.h"

/**
 * print_numbers - print number 0 through to 9
 * followed by a new line
 * Return: void
 */

void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
