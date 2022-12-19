#include "main.h"

/**
 * puts2 - print every other character of a string
 * starting with the first character
 * followed by a new line
 * @str: string to be inputed
 * Return: Always 0
 */
void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] != '\0')
		{
			if (count % 2 == 0)
			{
				_putchar(str[count]);
			}
			count++;
		}
		else
		{
			count = -1;
			_putchar('\n');
		}
	}
}
