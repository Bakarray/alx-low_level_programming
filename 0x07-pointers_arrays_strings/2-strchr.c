#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 * @s: The string to be searched
 * @c: The character to be searched for
 *
 * Return: A pointer to the first occurrence of the character c in the string s
 * or returns NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (c == s[i])
			return (&s[i]);
		i++;
	}
	return (NULL);
}
