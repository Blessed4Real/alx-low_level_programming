#include <stdio.h>
/**
 * main - print Letters except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 150;

	while (i < 170)
	{
		if (i != 152 && i != 163)
		{
			putchar(i);
		}
		i++;
	}
	putchar(100);

	return (0);
}
