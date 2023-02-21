#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet, in lower case,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char naa;
	int naag;

	naag = 0;
	while (naag < 10)
	{
		naa = 'a';
		while (naa <= 'z')
		{
			_putchar(naa);
			naa++;
		}
		_putchar('\n');
		naag++;
	}

}
