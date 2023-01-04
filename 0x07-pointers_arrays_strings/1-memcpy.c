#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: dest memory area
 * @src: source memory area
 * @n: bytes from memory area to copy
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
	{
		dest[p] = src[p];
	}

	return (dest);
}
