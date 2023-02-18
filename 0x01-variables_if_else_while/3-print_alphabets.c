#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char naag;

	for (naag = 'a'; naag <= 'z'; naag++)
		putchar(naag);
	for (naag = 'A'; naag <= 'Z'; naag++)
		putchar(naag);
	putchar('\n');
	return (0);
}
