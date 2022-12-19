#include "main.h"

/**
 * puts_half - print half of a string
 * @str: input string
 * Return: Always 0
 */
void puts_half(char *str)
{
	int len = 0, n;

	while (len >= 0)
	{
		if (str[len] != '\n')
		{
			len++;
		} else
		{
			break;
		}
	}

	if (len % 2 == 0)
		n = len / 2;
	else
	{
		n = (len - 1) / 2;
		n = n + 1;
	}

	while (n < len)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
