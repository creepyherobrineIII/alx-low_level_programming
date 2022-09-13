#include "main.h"

/**
 * print_alphabet - Prints alphabet in lowercase
 *
 * Return: Always 0(Success)
 */

void print_alphabet_x10(void)
{
int i = 0;
int c = 1;

while (c < 10)
{
i = 0;
while (i < 26)
{
_putchar('a' + i);
i++;
}
_putchar('\n');
c++;
}
}
