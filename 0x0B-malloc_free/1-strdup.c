#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *_strdup - a func that returns a pointer to a newly allocated space memory
 *@str: string
 *Return: pointer of array of char type
 */
char *_strdup(char *str)
{
	char *stout;
	unsigned int m, n;

	if (str == NULL)
		return (NULL);

	for (m = 0; str[m] != '\0'; m++)
	{

	stout = (char *)malloc(sizeof(char) * (m + 1));
	}

	if (stout == NULL)
		return (NULL);

	for (n = 0; n <= m; n++)
	{
		stout[n] = str[n];
	}
	return (stout);
}
