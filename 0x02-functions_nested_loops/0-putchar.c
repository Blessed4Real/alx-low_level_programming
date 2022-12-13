#include "main.h"
/**
 * main - Entry putchar
 * Description: prints _putchar followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c[8] = "putchar";

	int b = 0;

	for (b < 8)
	{
		_putchar (c[b]);
		b++;
	}
	_putchar("\n");
	return (0);
}

