#include "main.h"

/**
 * _strcmp - compares string and returns relevent value
 *
 * @s1: string parameter for comparison
 * @s2: string parameter for comparison
 *
 * Return: integer with conditions
 */

int _strcmp(char *s1, char *s2)
{
	int out, i;

	out = 0;
	i = 0;

	if (*(s1 + i) == *(s2 + i))
	{
		out = 0;
	}

	if (*(s1 + i) > *(s2 + i))
	{
		out = *(s1 + i) - *(s2 + i);
	}

	if (*(s1 + i) < *(s2 + i))
	{
		out = *(s1 + i) - *(s2 + i);
	}

	return (out);
}
