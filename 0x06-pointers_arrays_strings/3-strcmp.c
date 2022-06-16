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
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
