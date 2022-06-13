#include "main.h"

/**
 * print_to_98 - prints number from num to 98
 * @num: any integer
 *
 * Return: Nothing
 */

void print_to_98(int num)
{
	if (num <= 98)
	{
		for (; num <= 98; num++)
		{
			_putchar(num + '0');

			if (num == 98)
				break;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	else
	{
		for (; num >= 98; num--)
		{
			_putchar(num + '0');

			if (num == 98)
				continue;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
