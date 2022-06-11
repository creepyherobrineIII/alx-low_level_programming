#include <stdio.h>

/**
 * main - Print single digit numbers with base 10 from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		printf("%i",i);
		i++;
	}
	printf("\n");
	return (0);
}
