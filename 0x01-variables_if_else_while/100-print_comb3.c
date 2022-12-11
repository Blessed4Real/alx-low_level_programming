#include <stdio.h>

/**
 * main - all two digits combination
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b;

	a = 48;
	b = 48;

	while (a < 58)
	{
		b = a + 1;
		while (b < 58)
		{
			putchar(a);
			putchar(b);

			if (a < 56 || b < 57)
			{

				putchar(44);
				putchar(32);
			}
			b++;
		}

		a++;

	}

	putchar(10);

	return (0);

}
