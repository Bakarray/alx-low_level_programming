#include "main.h"

/**
 *print_alphabet - prints alphabets in lowercase
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

