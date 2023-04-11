#include "main.h"
/**
 *_strspn - to get lengt of a prefix substring
 *@s:initial segment
 *@accept:accepted byte
 *Return: the number of accepted byte
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j;
	unsigned int k;
	unsigned int bool;

	for (j = 0 ; *(s + j) != '\0' ; j++)
	{
		bool = 1;
		for (k = 0 ; *(accept + k) != '\0' ; k++)
		{
			if (*(s + j) == *(accept + k))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (j);
}
