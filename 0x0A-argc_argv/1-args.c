#include <stdio.h>
/**
 * main - a program that prints the number of arguments passed into it
 * @argc: number of command line in the program
 * @argv: array of strings in the program
 * Return: 0 as success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
