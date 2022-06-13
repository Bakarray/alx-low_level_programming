#include "main.h"

/**
 *_abs - returns the absolut value of a number
 * @r: the value to check
 *
 * Return: Absolute value of num
 */
int _abs(int num)
{
	if (num >= 0)
		return (num);
	else
		return (num * -1);
}
