#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to look for
 * Return: the pointer to the first occurence of the character c
 */
char *_strchr(char *s, char c)
{
	unsigned int p = 0;

	for (; *(s + p) != '\0'; p++)
		if (*(s + p) == c)
			return (s + p);
	if (*(s + p) == c)
		return (s + p);
	return ('\0');
}
