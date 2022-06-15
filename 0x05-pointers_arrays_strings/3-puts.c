#include "main.h"

/**
 * _puts - Prints a string to stdout
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int i;
	
	for (i = 0; i > -1; i++)
	{
		if (str[0] != '\0')
			_putchar(str[i]);
		else
			break;
	}
}
