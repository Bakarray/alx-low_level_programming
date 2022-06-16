#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	long double fibonacci[98];
	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for (i = 2; i <= 98; i++)
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	printf("%Lf", fibonacci[98]);

	return (0);
}
