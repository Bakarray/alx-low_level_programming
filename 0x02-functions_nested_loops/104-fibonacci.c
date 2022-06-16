#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	char ninety8;
	long double fibonacci[98];
	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for (i = 2; i <= 98; i++)
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	ninety8 = fibonacci[98] + '0';
	printf("%s", ninety8);

	return (0);
}
