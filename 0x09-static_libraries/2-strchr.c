#include "main.h"
/**
 *_strchr - locate character in the string
 *@s: string
 *@c: character
 *Return: the pointer of the first occurance of character c
 */
char *_strchr(char *s, char c)
{
	unsigned int j;

	for (j = 0 ; *(s + j) != '\0' ; j++)
		if (*(s + j) == c)
			return (s + j);
	if (*(s + j) == c)
		return (s + j);
	return ('\0');
}
