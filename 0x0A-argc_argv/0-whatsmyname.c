#include <stdio.h>
/**
 * main - printing program  name, followed by a new line.
 * @argc: number of command line arguments.
 * @argv: array of string that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
