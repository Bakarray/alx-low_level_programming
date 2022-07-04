#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - function allocates memory using malloc
 * @b: the size of the memory to be allocated
 *
 * function terminates with a status value of 98
 *
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);

	return (s);
}
