#include <stdio.h>


/**
 *  main - prints quote to stderr
 *
 *  Return: 1 (Success)
 */


int main(void)
{
	int len;
	char quote[];

	quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	len = sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19");
	write(2, quote[], len);
	return (1);
}
