#include <main.h>
/**
 * main - Entry to loop
 *
 * Description: print _putchar with a new line
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char c[8] = "_putchar";

	int b = 0;

	for (b < 8)
	{
		_putchar(c[b]);
		b++;
	}
	_putchar("\n");
	return (0);
}
