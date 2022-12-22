#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse the content of an array
 * @a: array of integers
 * @n: numbers of elements to swap
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int l, m, p;

	for (l = 0; l < n; l++)
	{
		for (m = l + 1; m > 0; m--)
		{
			p = *(a + m);
			*(a + m) = *(a + (m - 1));
			*(a + (m - 1)) = p;
		}
	}
}
