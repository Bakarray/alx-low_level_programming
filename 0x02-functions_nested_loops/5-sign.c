#include "main.h"

/**
 * print_sign - Checks sign of a number
 * @n: the number to check
 *
 * Return: 1 (number is positive), 0 (number is 0), -1 (number is negative)
 */

int print_sign(int n)
{
	int num;

	if (n > 0)
	{
		num = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		num = 0;
		_putchar('0');
	}
	else
	{
		num = -1;
		_putchar('-');
	}

	return (num);
}
