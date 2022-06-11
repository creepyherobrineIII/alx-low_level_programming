#include <stdio.h>

/**
 * main - prints the various sizes of data types on the computer
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %d bytes\n", sizeof(char));
	printf("Size of an int: %d bytes\n", sizeof(int));
	printf("Size of a long int: %d bytes\n", sizeof(long));
	printf("Size of a long long int: %d bytes\n", sizeof(long long));
	printf("Size of a float: %d bytes\n", sizeof(float));
	return (0);
}
