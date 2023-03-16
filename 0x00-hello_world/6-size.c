#include<stdio.h>
/**
 *main - print the size of variuos type of c
 *
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long d;
	float f;

	printf("size of a char: %d byte(s)\n", (unsigned long)sizeof(a));
	printf("size of a int: %d byte(s)\n", (unsigned int)sizeof(b));
	printf("size of a long int: %d byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %d byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a float: %d byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
