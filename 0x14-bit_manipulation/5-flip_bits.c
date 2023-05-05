#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip
 * to get from one number to another
 *
 * @n: initial number
 * @m: second number
 *
 * Return: numer of bits
 *
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int p = n ^ m;
	int count = 0;

	while (p)
	{
		if (p & 1)
			count++;
		p = p >> 1;
	}
	return (count);
}
