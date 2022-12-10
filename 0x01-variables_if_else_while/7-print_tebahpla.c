#include <stdio.h>

/**
 * main - major come back in c
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int b = 123;

	while (b > 95)
	{
		putchar(b);
		b--;
	}

	putchar(10);

	return (0);
}
