#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: a character pointer that points to the string to be measured
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int len = 0;
	int i;

	for (i = 0; i > -1; i++)
	{
		if (*(s + i) != '\0')
			len++;
		else
			break;
	}

	return (len);
}
