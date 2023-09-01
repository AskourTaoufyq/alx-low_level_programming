#include "main.h"

/**
 * get_bit - get a bits at the index.
 * @n - num to the index.
 * @index: bit to get
 * return bit state or -1 on the error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
