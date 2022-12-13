#include "main.h"
/**
 * main - Entry Block
 * Description: print _putchar followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c[8] = "_putchar";

	int b = 0;

	while (b < 8)
	{
		_putchar (c[b]);
		b++;
	}
	_putchar('\n');
	return (0);
}

