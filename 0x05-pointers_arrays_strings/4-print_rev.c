#include "main.h"

/**
 * print_rev - print a string, in reverse and a new line after
 * @s: input string
 * Return: Always 0
 */

void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] != '\n')
		{
			count++;
		}
		else
		{
			break;
		}
	}

	for (count--; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
