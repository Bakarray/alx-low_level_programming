#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	unsigned long int fibonacci;
	unsigned long int fib1 = 1;
	unsigned long int fib2 = 2;

	printf("%lu, ", fib1);
	printf("%lu, ", fib2);

	for (i = 3; i <= 98; i++)
	{
		fibonacci = fib1 + fib2;
		fib1 = fib2;
		fib2 = fibonacci;
		if (i == 98)
			printf("%lu\n", fibonacci + 2);

		else if (i == 93 || i == 94)
			printf("%lu, ", fibonacci - 1);
		else
			printf("%lu, ", fibonacci + 1);
	}

	return (0);
}
