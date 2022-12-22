#include "main.h"
#include <stdio.h>

/**
 * _strcat - concartenate two strings
 * @dest: the string destination
 * @src: the string source
 * Return: pointer to the string destination
 */

char *_strcat(char *dest, char *src)
{
	int string1 = 0;
	int string2 = 0;

	while (*(dest + string1) != '\0')
	{
		string1++;
	}

	while (string2 >= 0)
	{
		*(dest + string1) = *(src + string2);
		if (*(src + string2) == '\0')
			break;
		string1++;
		string2++;
	}
	return (dest);
}
