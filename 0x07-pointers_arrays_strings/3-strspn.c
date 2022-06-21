#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be checked
 * @accept: contains the bytes we want to check for
 *
 * Return: the number of bytes in the initial segment of s
 * which consists only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	int count = 0;

	for (i = 0; i < sizeof(s); i++)
		for (j = 0; j < sizeof(accept); j++)
			if (s[i] == accept[j])
				count++;
	return (count);
}
