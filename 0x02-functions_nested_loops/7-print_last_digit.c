#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @g: Integer to be used in function for testing
 *
 * Return: Last digit value of int
 */

int print_last_digit(int g)
{
int ld = g % 10;
if (ld < 0)
{
	ld = ld * (-1);
}
_putchar('0' + ld);
return (ld);
}
