#include <stdio.h>
#include "main.h"

/**
 * main - calculate sum of multiples of three and five
 *
 * Return: 0
 */

int main(void)
{
	int num;
	int sum;

	num = 0;
	sum = 0;

	while (num < 1024)
	{
		if ((num % 5 == 0) || (num % 3 == 0))
		{
			sum = sum + num;
		}

		num++;
	}
	printf("%i\n", sum);
	return (0);
