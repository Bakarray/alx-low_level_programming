#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @num: The parent number
 *
 * Return: last digit of number 'num'
 */

int print_last_digit(int num)
{
	int i;

	if (num < 0)
	{
		i = -1 * (num % 10);
	}
	else
	{
		i = num % 10;
	}

	_putchar((i % 10) + '0');

	return (i % 10);
}
