#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	long double fibonacci[98];
	fibonacci[0] = 1;
	fibonacci[1] = 2;
	int i;

	for (i = 2; i <= 98; i++)
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	printf("%LF", fibonacci[98]);

	return (0);
}
