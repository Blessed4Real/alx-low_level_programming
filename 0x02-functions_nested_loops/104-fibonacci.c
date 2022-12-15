#include <stdio.h>
#define LARGEST 1000000000
/**
 * main - the main block
 * Description: find and print the first 98 Fibonacci numbers
 * starting with 1 and 2, then a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int bl1 = 0, mw1 = 1, bl2 = 0, mw2 = 2;
	unsigned long int doll1, doll2, doll3;
	int count;

	printf("%lu, %lu, ", mw1, mw2);
	for (count = 2; count < 98; count++)
	{
		if (mw1 + mw2 > LARGEST || bl2 > 0 || bl1 > 0)
		{
			doll1 = (mw1 + mw2) / LARGEST;
			doll2 = (mw1 + mw2) % LARGEST;
			doll3 = bl1 + bl2 + doll1;
			bl1 = bl2, bl2 = doll3;
			mw1 = mw2, mw2 = doll2;
			printf("%lu%010lu", bl2, mw2);
		}
		else
		{
			doll2 = mw1 + mw2;
			mw1 = mw2, mw2 = doll2;
			printf("%lu", mw2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
