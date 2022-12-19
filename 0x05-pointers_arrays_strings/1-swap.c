#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: first integer
 * @b: second integer
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int i = *b;
	*b = *a;
	*a = i;
}
