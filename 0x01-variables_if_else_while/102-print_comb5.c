#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
*/

int main(void)
{
	int i, j;

	for (i = 0; j <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar(i / 10);
			putchar(i % 10);
			putchar(' ');
			putchar(j / 10);
			putchar(j % 10);

			if (i == 98 && j == 99)
				break;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
