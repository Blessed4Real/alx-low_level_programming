#include "main.h"

/**
 * print_diagonal - draw a diagonal line using the \ character
 * @n: number of \ to be printed
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int line = 0;
	int space;

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
