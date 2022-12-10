#include <stdio.h>

/**
 * main - print the numbers in c
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int b;

	b = 48;

	while (b < 58)
	{
		putchar(b);
		b++;
	}

	putchar(10);

	return (0);
}
