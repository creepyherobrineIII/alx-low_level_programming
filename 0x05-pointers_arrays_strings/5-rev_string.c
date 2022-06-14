#include "main.h"

/**
 * rev_string - reverses string
 *
 * @s: parameter for string which is being outputted in reverse
 */

void rev_string(char *s)
{
	int len, arrlen, i;
	char r, g;

	len = 0;
	i = 0;

	while (r != '\0')
	{
		r = *(s + len);
		len++;
	}

	len = len - 2;
	arrlen = len;
	i = 0;

	while (i <= arrlen)
	{
		r = *(s + len);
		g = *(s + i);
		*(s + len) = g;
		*(s + i) = r;
		i++;
		len--;
	}
}
