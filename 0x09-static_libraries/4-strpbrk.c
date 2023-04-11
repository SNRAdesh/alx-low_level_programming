#include "main.h"
/**
 *_strpbrk - searches for string of any of a set of byte
 *@s: string one
 *@accept:string two
 *Return: a pointer to the byte in s that matches
 *byte in accepr or Null if byte not found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0 ; *(s + i) != '\0' ; i++)
	{
		for (j = 0 ; *(accept + j) != '\0' ; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}