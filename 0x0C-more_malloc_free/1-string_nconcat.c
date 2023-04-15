#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenating two strings.
 * @s1: 1st string.
 * @s2: 2nd string.
 * @n: amount of bytes.
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int ls1, ls2, lsout, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	lsout = ls1 + n;

	sout = malloc(lsout + 1);

	if (sout == NULL)
		return (NULL);

	for (j = 0; j < lsout; j++)
		if (j < ls1)
			sout[j] = s1[j];
		else
			sout[j] = s2[j - ls1];

	sout[j] = '\0';

	return (sout);
}
