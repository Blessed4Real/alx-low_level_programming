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
	int i = 97;

	while (i < 125)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
		i++;
	}
	putchar(10);

	return (0);
}
