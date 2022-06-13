#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * Return: 1 (lowercase), 0(uppercase)
 */

int _islower(int c)
{
	if ((c + '0') < 123 && (c + '0') > 96)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
