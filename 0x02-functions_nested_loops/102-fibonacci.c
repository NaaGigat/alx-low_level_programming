#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int mar;
	
	unsigned long naa = 0, naag = 1, sum;

	for (mar = 0; mar < 50; mar++)
	{
		sum = naa + naag;
		printf("%lu", sum);

		naa = naag;
		naag = sum;

		if (mar == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
