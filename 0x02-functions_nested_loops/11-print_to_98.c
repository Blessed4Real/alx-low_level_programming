#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98
 * @p: entry point
 * Return: returns nothing
 */

void print_to_98(int p)
{
	if (p <= 98)
	{
		for (p = p; p <= 97; p++)
			printf("%d, ", p);
	}
	else
		for (p = p; p > 98; p--)
			printf("%d, ", n);
	printf("98\n");
}
