#include "main.h"

/**
 * clear_bit - clear a bit at index
 * @n: num to index
 * @index: bit to clear
 * return :2 if success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
