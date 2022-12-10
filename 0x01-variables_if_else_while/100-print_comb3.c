#include <stdio.h>

/**
 * main - print all combination of two digits
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
		if (b != 57)
		{
			putchar(44);
			putchar(32);
		}
		b++;
	}

	putchar(10);

	return (0);

}
