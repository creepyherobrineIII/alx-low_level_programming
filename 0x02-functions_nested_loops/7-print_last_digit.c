#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @g: Integer to be used in function for testing
 *
 * Return: Last digit value of int
 */

int print_last_digit(int g)
{
int ld = _abs(g) % 10;
_putchar('0' + ld);
return (ld);
}
