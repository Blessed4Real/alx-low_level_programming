#include <stdio.h>

/**
 * main - print the sum of even Fibonacci numbers
 * value not greater than 4000000
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	unsigned long int b, c, sum;

	a = 0;
	b = 1;
	c = 2;
	sum = c;

	while (c + b < 4000000)
	{
		c += b;

		if (c % 2 == 0)
			sum += c;

		b = c - b;

		++a;
	}

	printf("%ld\n", sum);
	return (0);
}
