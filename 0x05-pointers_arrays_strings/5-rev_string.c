#include "main.h"

/**
 * rev_string - reverses string
 *
 * @s: parameter for string which is being outputted in reverse
 */

void rev_string(char *s)
{
	int len, arrlen, i;
	char g, r;

	g = '\0';
	len = 0;
	i = 0;

	while (r != '\0')
	{
		r = *(s + len);
		len++;
	}

	len = len - 2;
	arrlen = len;

	char rev[len];

	while (len >= 0)
	{
		rev[i] = *(s + len);
		i++;
		len--;
	}

	i = 0;

	while (i <= arrlen)
	{
		*(s + i) = rev[i];
		i++;
	}
}
