#include "main.h"

/**
 *print_alphabet - prints alphabets in lowercase
 *
 * Return: none.
 */

void print_alphabet(void)
{
	char start = 'a';

	for (; start <= 'z'; start++)
		_putchar(start);
	_putchar("\n");
}
