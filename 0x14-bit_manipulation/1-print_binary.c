#include <stdio.h>
#include "main.h"

/**
 * print_binary - representation of a binary number
 * @n: the number to print
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int naag = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	while (naag > 0)
	{
		if ((n & naag) == naag)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag == 1 || naag == 1)
			_putchar('0');
		naag >>= 1;
	}
}
