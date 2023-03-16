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

	printf("size of a char: %d byte(s)\n", sizeof(char))
	printf("size of a int: %d byte(s)\n", sizeof(int))
	printf("size of a long int: %d byte(s)\n", sizeof(long int))
	printf("size of a long long int: %d byte(s)\n", sizeof(long long int))
	printf("size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
