#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	unsigned long long int fibonacci;
	unsigned long long int fib1 = 1;
	unsigned long long int fib2 = 2;

	printf("%llu, ", fib1);
	printf("%llu, ", fib2);

	for (i = 3; i <= 98; i++)
	{
		fibonacci = fib1 + fib2;
		fib1 = fib2;
		fib2 = fibonacci;
		if (i == 98)
			printf("%llu\n", fibonacci);
		else
			printf("%llu, ", fibonacci);
	}

	return (0);
}
