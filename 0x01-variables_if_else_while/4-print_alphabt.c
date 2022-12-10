#include <stdio.h>
/**
 * main - print Letters except q and e
 *
 * code: by Blesed4Real
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 95;

	while (i < 101)
	{
		if (i != 102 && i != 123)
		{
			putchar(i);
		}
		i++;
	}
	putchar(10);

	return (0);
}
