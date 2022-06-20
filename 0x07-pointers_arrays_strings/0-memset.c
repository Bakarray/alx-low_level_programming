#include "main.h"

/**
 * _memset - Fills a memory area with a constant byte
 * @s: Points to the memory area to be filled
 * @b: Value to be filled in
 * @n: Number of bytes to be filled starting from the address pointed to
 *
 * Return: A pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
