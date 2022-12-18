#include "main.h"

/**
 * print_diagonal - draws a diagonal line using \ character
 * @n: number of times to draw out character
 *
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int line, space;

	if (n > 0)
	{
		while (line < n)
		{
			for (space = 0; space < line; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			line++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
