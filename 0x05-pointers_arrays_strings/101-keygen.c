#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random password generator for program 101-crackme
 * Return: Always 0
 */

int main(void)
{
	int l, m, n, o;
	char c[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char p[58];

	srand(time(NULL));
	while (o != 2772)
	{
		l = n = o = 0;
		while ((2772 - 122) > o)
		{
			m = rand() % 62;
			p[l] = c[m];
			o += c[m];
			l++;
		}
		while (c[n])
		{
			if (c[n] == (2772 - o))
			{
				p[l] =  c[n];
				o += c[n];
				l++;
				break;
			}
			n++;
		}
	}
	p[l] = '\0';
	printf("%s", p);
	return (0);
}
