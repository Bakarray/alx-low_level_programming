#include "main.h"

/**
 * _strlen_recursion - Counts the length of a string
 * @s: A pointer to the string to be counted
 *
 * Return: The length of the string at s
 */
int _strlen_recursion(char *s)
{
	int count;

	if (*s)
	{
		count = 1 + _strlen_recursion(s + 1);
	}
	else
		count = 0;

	return (count);
}
