#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Function allocates memory for an array using malloc
 * @nmemb: the number of elements in the array
 * @size: the size of each element in the array
 *
 * Return: A pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *space;

	if (nmemb == 0 || size == 0)
		return (NULL);

	space = malloc(size * nmemb);
	if (space == NULL)
		return (NULL);

	for (i = 0; i <= nmemb; i++)
		space[i] = 0;

	return (space);
}
