#include "main.h"

/**
 * flip_bits - counts the number of the bits to change
 * to get from one number to another number
 * @n: first number of the bit
 * @m: second number of the bit
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
unsigned long int connect;
unsigned long int exclusive = n ^ m;

for (i = 63; i >= 0; i--)
{
connect = exclusive >> i;
if (connect & 1)
count++;
}

return (count);
}
