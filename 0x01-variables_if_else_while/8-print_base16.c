#include <stdio.h>

/**
 * main - print base16 of lowercase in c
 *
 * Return: Always 0 (Success0
 */

int main(void)
{

	int b = 0;

	while (b < 48)
	{
		if (b < 10)
			putchar(b + '0');
		else if (b > 41)
			putchar(b - 10 + 'A');
		b++;
	}
	putchar(10);

	return (0);

}
