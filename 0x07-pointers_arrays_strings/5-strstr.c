#include "main.h"
/**
 * _strstr - find fitst occurance ofthe substring
 * @haystack:entire string
 * @needle:substring
 * Return:point to be the begin of a located string
 *NULL if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *phaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		phaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*phaystack)
			return (phaystack);
		haystack = phaystack + 1;
	}
	return (0);
}
