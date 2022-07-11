#include <stdio.h>

/**
 * main - using sizeof to dynamically determine the size of types char, int and float
 *
 * Return: Always 0.
 */

int main(void)
{
	int n = 7;
	printf("Size of 'char' on my computer: %lu bytes\n", sizeof(char));
	printf("%d\n", n);

	return (0);
}
