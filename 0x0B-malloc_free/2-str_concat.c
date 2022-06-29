#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenates two strings
 * @s1: the first string to be concatenated
 * @s2: the second string to be concatenated
 *
 * Return: A pointer to the newly allocated space in memory which contains
 * the contents of s1, followed by the contents of s2, and null terminated or
 * returns NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	/**
	 * 1. get the size of the two strings combined
	 * 2. allocate a space for the duplicate of the size from 1 above with malloc
	 * ---check if the memory allocation was successful
	 * 3. copy each character from the first string into the duplicate
	 * ---if NULL is passed into s1 or s2, treat it as an empty string
	 * 4. when you get to the '\0' character, skip it and move on to the next string
	 * 5. copy each character from the second string into the duplicate (as an addition to the previously copied ones)
	 * 6. stop at the '\0' character
	 * 7. return a pointer to duplicate
	 */

	int i, j, count = 0;

	char *duplicate;

	for (i = 0; i > -1; i++)
	{
		if (s1[i] != '\0')
			count++;
		else
		{
			for (j = 0; j <= -1; j++)
			{
				if (s2[j] != '\0')
					count++;
				else
				{
					count++;
					break;
				}
			}
			break;
		}
	}

	duplicate = malloc(count * sizeof(char));
	if (duplicate == NULL)
		return (NULL);

	i = 0;

	while (s1[i] != '\0')
	{
		duplicate[i] = s1[i];
		i++;
	}

	j = 0;

	while (s2[j] != '\0')
	{
		duplicate[i] = s2[j];
		i++;
		j++;
	}

	return (duplicate);
}
