#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenating two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *z;
	unsigned int a, x, y, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (x = 0; s2[x] != '\0'; x++)
		;

	z = malloc(sizeof(char) * (a + x + 1));

	if (z == NULL)
	{
		free(z);
		return (NULL);
	}

	for (y = 0; y < a; y++)
		z[y] = s1[y];

	limit = x;
	for (x = 0; x <= limit; y++, x++)
		z[y] = s2[x];

	return (z);
}
