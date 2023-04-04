#include "main.h"
/**
 *_memcpy - copy specific amount of memory from a source to a destination
 *@dest: destination memory are
 *@n: specific memory allocated
 *@src: source memory area
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0 ; j < n ; j++)
		*(dest + j) = *(src + j);
	return (dest);
}
