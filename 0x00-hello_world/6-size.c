#include<stdio.h>


/**
 * main - Print the Size of various typesa based on
 * the computer it is complied and run on..
 * Return: Always 0.
*/

int main(void)

{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));

	printf("Size of a int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
