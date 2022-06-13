#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints out alphabet x10 times using header files
 */

void print_alphabet_x10(void)
{
	int i;
	int lc;

	lc = 0;
	i = 0;

	while (lc < 10)
	{
		i = 0;
		while (i < 26)
		{
			putchar('a' + i);
			i++;
		}
		lc++;
		putchar('\n');
	}
}
