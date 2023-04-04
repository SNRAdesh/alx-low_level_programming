#include "main.h"
/**
 *_memset - fills memory with a constant byte,
 *@s: memmory are
 *@b: constant byt
 *@n: byte filled
 *Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0 ; j < n ; j++)
		*(s + j) = b;

	return (s);
}
