#include "main.h"

/**
 * binary_to_uint - convert the  binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number of the int
 */

unsigned int binary_to_uint(const char *b)
{
        int i;
        unsigned int dec_vals = 0;

        if (!b)
        return (0);

        for (i = 0; b[i]; i++)
        {
                if (b[i] < '0' || b[i] > '1')
                return (0);
                dec_vals = 2 * dec_vals + (b[i] - '0');
        }

        return (dec_vals);
}
