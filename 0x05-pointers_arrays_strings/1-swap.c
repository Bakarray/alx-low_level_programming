#include "main.h"

/**
 * swap_int - swaps the value of two different inputs
 * @a: first input
 * @b: second input
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
