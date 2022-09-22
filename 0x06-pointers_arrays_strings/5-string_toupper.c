#include "main.h"

/**
 * string_toupper - Converts lowercase string to uppercase
 * @s: string to be converted
 * Return: char pointer
 */

char *string_toupper(char *s)
{
	int c = 0;
	char temp;

	while (s[c] != '\0')
	{
		c++;
	}

	for (int i = 0; i < c; i++)
	{
		temp = s[i];

		if ((temp > 96) && (temp < 123))
		{
			temp = temp - 32;
			s[i] = temp;
		}
	}
	return (s);
}
