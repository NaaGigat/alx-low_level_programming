#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - binary number conversion to unsigned int
 * @b: a string of 0 and 1 chars pointer
 *
 * Return: the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1, or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
        unsigned int k = 0;

        if (!b)
                return (0);
        while (*b)
        {
                if (*b != '0' && *b != '1')
                        return (0);
                k = k * 2 + *b - '0';
                ++b;
        }
        return (k);
}

