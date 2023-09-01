#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to the num to change
 * @index: index of the bit to clear
 *
 * return: 1 for success, -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
