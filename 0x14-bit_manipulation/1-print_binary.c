#include "main.h"

/**
 * print_binary - print the binary equivalent of a decimal number
 * @n: number to print in binary number
 */

void print_binary(unsigned long int n)
{
int i, count = 0;
unsigned long int crest;

for (i = 63; i >= 0; i--)
{
crest = n >> i;

if (crest & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
}
if (!count)
_putchar('0');
}
