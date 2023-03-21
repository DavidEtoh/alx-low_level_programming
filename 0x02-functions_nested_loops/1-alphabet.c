#include <main.h>

/**
 * main - print the lowercase alphabet
 * Return: 0
 */

void print_alphabet(void);
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++
	}
	_putchar('\n');
}
