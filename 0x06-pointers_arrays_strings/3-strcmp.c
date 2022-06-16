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
	int out, i, len1, len2;

	out = 0;
	i = 0;

	while (*(s1 + i) != '\0')
	{
		len1++;
		i++;
	}

	i = 0;

	while (*(s2 + i) != '\0')
	{
		len2++;
		i++;                                                  
	}

	if (len2 == len1)
		out = 0;

	if (len2 > len1)
		out = -21;

	if (len2 < len1)
		out = 21;

	return (out);
}
