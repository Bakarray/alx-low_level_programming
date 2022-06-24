#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add positive numbers
 * @argc: argument to program count
 * @argv: an array of the arguments
 *
 * Return: 0 (Success) or 1 (non digit detected)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]))
			sum += atoi(argv[i]);
		else
		{
			puts("Error");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
