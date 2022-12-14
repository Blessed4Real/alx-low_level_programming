#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times in lowercase and a new line
 */

void print_alphabet_x10(void)
{
	char c;
	int a = 0;

	while (a <= 9)
	{
		for (c = 'z'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');

		a++;
	}
}
