#include "main.h"
/**
 * jack_bauer - print every minute of the day of jack Bauer
 *
 * Return: ...
 */
void jack_bauer(void)
{
	int i, j, k, m;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if ((i <= 1 && j <= 9) || (i <= 2 && j <= 3))
			{
				for (k = 0; k <= 5; k++)
				{
					for (m = 0; m <= 9; m++)
					{
						_putchar(i + '0');
						_putchar(j + '0');
						_putchar(58);
						_putchar(k + '0');
						_putchar(m + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
