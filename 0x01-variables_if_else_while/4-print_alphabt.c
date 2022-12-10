#include <stdio.h>
/**
 * main - print Letters except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 98;

	while (i < 100)
	{
		if (i != 102 && i != 163)
		{
			putchar(i);
		}
		i++;
	}
	putchar(10);

	return (0);
}
