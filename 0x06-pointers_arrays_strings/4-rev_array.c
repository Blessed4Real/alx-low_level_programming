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
	int *k, o, ble, m;

	k = a;

	for (o = 1, o < n; o++;)
	{
		k++;
	}
	for (m = 0; m < o / 2; m++)
	{
		ble = a[m];
		a[m] = *k;
		*k = ble;
		k--;
	}
}

