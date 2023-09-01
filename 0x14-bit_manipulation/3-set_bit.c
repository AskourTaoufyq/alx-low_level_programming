#include "main.h"

/**
 * set_bit - set the bit at gives index to 1
 * @n: num to index
 * @index: bit to set
 * return 1 if successfull, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
