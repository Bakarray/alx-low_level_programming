#include "main.h"

/**
 * _isalpha - checks if input is an alphabet
 * @c: The character to be checked
 *
 * Return: 1 (lowercase), 0(uppercase)
 */

int _islower(int c)
{
        if (c < 123 && c > 96 || c < 91 && c > 64)
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
