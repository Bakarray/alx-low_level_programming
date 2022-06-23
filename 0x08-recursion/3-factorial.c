#include <stdio.h>

/**
 * factorial - Returns the factorial of a given number
 * @n: The number whose factorial is to be gotten
 *
 * Return: -1 (number less than 0) or 1 (number >= 0)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
