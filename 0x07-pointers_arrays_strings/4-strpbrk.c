#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: the string which contains the character to be found
 * @accept: the string to be searched
 *
 * Return: a pointer to the byte in s that matches one of
 * the bytes in accet or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s)
	{
		for (i = 0; i < sizeof(accept); i++)
			if (*s == accept[i])
				return (s);
		s++;
	}
	return (NULL);
}
