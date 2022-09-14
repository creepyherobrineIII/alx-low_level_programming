#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet in lowercase
 *
 * Return: None
 */

void print_alphabet_x10(void)
{
int i = 0;
int c = 0;

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
