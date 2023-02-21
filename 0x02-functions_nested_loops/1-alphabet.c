#include "main.h"
/**
 * main - Alphabet in lowercase and a new line
 * Return: 0 Always
 */
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp = 'z'; alp++)
		_putchar(alp);
	_putchar('\n');
	return (0);
}
