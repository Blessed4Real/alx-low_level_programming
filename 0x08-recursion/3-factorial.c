#include "main.h"
/**
 * factorial - return the factorial of a given mumber
 * @n: input number
 * Return: factorial of the number
 */

int factorial(int n)
{
	if (n < 0) /*Base condition*/
		return (-1);

	else if (n == 0) /*Base condition*/
		return (1);
	else
		return (n * factorial(n - 1)); /*Recursiv call*/
}
