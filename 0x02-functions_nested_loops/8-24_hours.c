#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of
 *              Jack Bauer, starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int naa, gigat;

	for (naa = 0; naa <= 23; naa++)
	{
		for (gigat = 0; gigat <= 59; gigat++)
		{
			_putchar((naa / 10) + '0');
			_putchar((naa % 10) + '0');
			_putchar(':');
			_putchar((gigat / 10) + '0');
			_putchar((gigat % 10) + '0');
			_putchar('\n');
		}
	}
}
