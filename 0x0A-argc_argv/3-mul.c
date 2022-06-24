#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers from command line
 * @argc: argument count
 * @argv: an array of the arguments
 *
 * Return: 0 (success) or 1 (program does not receive two arguments)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	else
	{
		printf("%d\n",atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
