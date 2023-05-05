#include "main.h"

/**
 * clear_bit - sets value of bit to 0  at a given index
 *
 * @n: number
 * @index: imdex
 *
 * Return: 1 if it worked, -1 if an error occured
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
