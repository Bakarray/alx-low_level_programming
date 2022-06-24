#include <stdio.h>

/**
 * main - prints all the arguments the program receives
 * @argc: argument count
 * @argv: array of the arguments
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
