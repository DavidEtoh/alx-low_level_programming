#include "main.h"

/**
 * clear_bit - sets value of the given bit to 0
 * @n: the number to chance in the pointer
 * @index: index of the bit to clear
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
        if (index > 63)
                return (-1);

        *n = (~(1UL << index) & *n);

        return (1);
}
