#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - A function that concatenates two strings
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 * @n: the number of bytes to take from s2
 *
 * Return: A pointer to the allocated space for the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1 = 0, len2 = 0;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	if (n >= len2)
		n = len2;

	new_str = malloc(len1 + n + 1);
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < (len1 + n); i++)
	{
		if (i < len1)
			new_str[i] = *s1, s1++;
		else
			new_str[i] = *s2, s2++;
	}
	new_str[i] = '\0';

	return (new_str);
}
