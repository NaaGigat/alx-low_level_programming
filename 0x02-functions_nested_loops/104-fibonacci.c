#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int mar;
	unsigned long naa = 0, naag = 1, all;
	unsigned long naa_naa1, naa_naag2, naag_naa1, naag_naag2;
	unsigned long naa1, naag2;

	for (mar = 0; mar < 92; mar++)
	{
		all = naa + naag;
		printf("%lu, ", all);

		naa = naag;
		naag = all;
	}

	naa_naa1 = naa / 10000000000;
	naag_naa1 = naag / 10000000000;
	naa_naa2 = naa % 10000000000;
	naag_naag2 = naag % 10000000000;

	for (mar = 93; mar < 99; mar++)
	{
		naa1 = naa_naa1 + naag_naa1;
		naag2 = naa_naag2 + naag_naag2;
		if (naa_naag2 + naag_naag2 > 9999999999)
		{
			naa1 += 1;
			naag2 %= 10000000000;
		}

		printf("%lu%lu", naa1, naag2);
		if (mar != 98)
			printf(", ");

		naa_naa1 = naag_naa1;
		naa_naag2 = naag_naag2;
		naag_naa1 = naa1;
		naag_naag2 = naag2;
	}
	printf("\n");
	return (0);
}
