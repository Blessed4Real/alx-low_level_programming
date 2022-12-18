#include "main.h"

/**
 * pirnt_diagonal - Draws a diagonal line using the \ charcter
 *
 * @n: the number of \ characters to be printed
 *
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int line, space;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (space = 0; space < line; space++)
				_putchar(' ');
			_putchar('\\');

			if (line == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
