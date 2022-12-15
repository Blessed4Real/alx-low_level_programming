#include <stdio.h>

/**
 * main - print the sum of even Fibonacci numbers
 * value not greater than 4000000
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	unsigned long int b, c, next, sum;

	a = 1;
	c = 2;
	sum = 0;

	for (a = 1; a <= 33; ++a)
	{
		if (b < 4000000 && (b % 2) == 0)
		{
			sum = sum + b;
		}
		next = b + c;
		b = c;
		c = next;
	}

	printf("%lu\n", sum);

	return (0);
}
