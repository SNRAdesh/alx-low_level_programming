#include "main.h"
/**
 * get_bit - this returning a value at a given index
 * @n: Unsigned long int input
 *
 * @index:this is the index of the bit
 * Return: it returns the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int y;

	if (index > (sizeof(8) * 8))
		return (-1);
	for (y = 0; y < index; y++)
		n = n >> 1;
	return ((n & 1));
}
