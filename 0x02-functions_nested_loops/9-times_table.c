#include "main.h"

/**
 * times_table - prints the multiplication table
 *
 * Return: None
 */

void times_table(void)
{
	int i, j, num;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			num = i * j;

			if ((num / 10) == 0)
			{
				if (j != 0)
					_putchar(' ');
				_putchar(num + '0');

				if (j == 9)
					break;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
				if (j == 9)
					break;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
