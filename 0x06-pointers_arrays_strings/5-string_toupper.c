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
		temp = s[c];

		if ((temp > 96) && (temp < 123))
		{
			temp = temp - 32;
			s[c] = temp;
		}
		c++;
	}

	return (s);
}
