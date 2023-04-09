#include <stdio.h>
#include <stdlib.h>
/**
 * main - program should print the result of the multipication
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int multply = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		multply *= atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multply);
	return (0);
	}

}
