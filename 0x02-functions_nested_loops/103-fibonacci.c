#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long naa = 0, naag = 1, nasum;
	float all_sum;

	while (1)
	{
		nasum = naa + naag;
		if (nasum > 4000000)
			break;

		if ((nasum % 2) == 0)
			all_sum += nasum;

		naa = naag;
		naag = nasum;
	}
	printf("%.0f\n", all_sum);

	return (0);
}
