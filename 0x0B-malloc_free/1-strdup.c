#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a string given as a parameter
 * @str: a pointer to the string to be duplicated
 *
 * Return: A pointer to the duplicated string
 * or NULL (if insufficient memory was available)
 */
char *_strdup(char *str)
{
	int j, count = 0;
	int i;
	char *duplicate;
	char s;

	if (str == NULL)
		return (NULL);

	for (i = 0; i > -1; i++)
	{
		s = str[i];

		if (s == '\0')
		{
			count++;
			break;
		}
		else
			count++;
	}

	duplicate = malloc(count * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	for (j = 0; j <= count; j++)
		duplicate[j] = str[j];

	return (duplicate);
}
