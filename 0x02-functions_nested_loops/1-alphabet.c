#include <stdio.h>
#include "main.h"

/* function: prints out alphabet */

void print_alphabet(void)
{
	int i;

	i = 0;

	while (i < 26)
	{
		putchar('a' + i);
		i++;
	}
	putchar('\n');
}
