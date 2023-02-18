#include <stdio.h>

/**
 * main - prints alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char naag;

	for (naag = 'a'; naag <= 'z'; naag++)
	{
		if (naag != 'e' && naag != 'q')
			putchar(naag);
	}

	putchar('\n');

	return (0);
}
