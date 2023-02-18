#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char naag;

	for (naag = 'z'; naag >= 'a'; naag--)
		putchar(naag);

	putchar('\n');

	return (0);
}

