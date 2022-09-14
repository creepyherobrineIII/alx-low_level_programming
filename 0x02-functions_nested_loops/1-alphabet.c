#include "main.h"

/**
 * print_alphabet - Prints alphabet in lowercase
 *
 * Return: None
 */

void print_alphabet(void)
{
int i = 0;

while (i < 26)
{
_putchar('a' + i);
i++;
}

_putchar('\n');
}
