#include "main.h"

/**
 * get_endianness - checks if the machine is small or big endian
 * Return: 0 for big, 1 for small
 */
int get_endianness(void)
{
unsigned int i = 1;
char *a = (char *) &i;

return (*a);
}
