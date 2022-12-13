#include "main.h"
/**
 * print_alphabet - Entry point
 * Description - print the alphabets in lowercase followed by a new line
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
	return (0);
}
