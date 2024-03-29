#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets value of bit to 1 at a particular index
 * @n: pointer to the number to be modified
 *
 * @index: index to the bit to be set
 * Return: 1 if it worked, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= (1UL << index);
	return (1);
}
