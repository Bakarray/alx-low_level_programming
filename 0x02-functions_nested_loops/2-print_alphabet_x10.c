#include "main.h"

/**
 *print_alphabet_x10 - prints alphabets in lowercase ten times.
 *
 * Return: none.
 */

void print_alphabet_x10(void)
{
	char start = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		for (; start <= 'z'; start++)
			_putchar(start);
		_putchar('\n');
	}
}
