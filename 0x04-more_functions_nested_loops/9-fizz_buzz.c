#include "main.h"
#include <stdio.h>

/**
 * main - print the numbers from 1 to 100, followed by a new line
 * for multiples of 3 print Fizz instead of the number and
 * for multiples of 5 print Buzz
 * for numbers which are multiples of both 3 and 5 print FizzBuzz
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 1; n < 101; n++)
	{
		if (n % 5 == 0 && n % 3 == 0)
			printf("FizzBuzz ");
		else if (n % 5 == 0)
			if (n == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		else if (n % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", n);
	}
	printf("\n");

	return (0);
}
