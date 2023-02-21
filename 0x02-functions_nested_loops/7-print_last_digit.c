#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int naa;

	if (naa < 0)
		naa = -naa;
	_putchar(naa + '0');
	return (naa);
}
