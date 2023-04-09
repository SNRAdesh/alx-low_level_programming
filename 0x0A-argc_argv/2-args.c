#include <stdio.h>
/**
 * main - a program that prints all arguments it receives
 * @argc: counts number of argument
 * @argv: array of string of arguments in the program
 * Return: 0 always as success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; ++i)
		printf("%s\n", argv[i]);
	return (0);
}
