#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with a specific char
 * @size: size of the array
 * @c: the char used for the initialization
 *
 * Return: A pointer to the array or Null (if it fails)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *array = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
