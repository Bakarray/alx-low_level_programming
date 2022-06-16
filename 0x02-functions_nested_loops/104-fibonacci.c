#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	long double fibonacci;

	long double fib1 = 1;
	long double fib2 = 2;

	printf("%.0Lf, ", fib1);
	printf("%.0Lf, ", fib2);

	for (i = 3; i <= 98; i++)
	{
		fibonacci = fib1 + fib2;
		fib1 = fib2;
		fib2 = fibonacci;
		if (i == 98)
			printf("%.0Lf\n", fibonacci);
		else
			printf("%.0Lf, ", fibonacci);
	}

	return (0);
}
