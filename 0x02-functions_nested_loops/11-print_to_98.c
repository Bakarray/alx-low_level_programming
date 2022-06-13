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
			_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');

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
			if (num > 99)
			{
				_putchar((num / 100) + '0');
				_putchar(((num / 10) % 10) + '0');
				_putchar((num % 10) + '0');
			}
			else
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}

			if (num == 98)
				break;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
