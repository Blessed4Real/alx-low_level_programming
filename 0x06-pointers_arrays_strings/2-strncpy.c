#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copy a string
 * @dest: string destination
 * @src: string source
 * @n: size or amount of bytes used from the source
 * Return: Always 0 when copied
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (0);
}
