#include "main.h"

/**
 * string_toupper - converts letter to lowercase
 *
 * @str: char parameter
 *
 * Return: str as uppercase
 */

char *string_toupper(char *str)
{
	int i;
	char g;

	i = 0;

	while (str[i] != '\0')
	{
		g = str[i];

		if ((g >= 97) && (g <= 122))
		{
			g = g - 32;
		} else
		{
			i++;
		}

		str[i] = g;
		i++;
	}

	i--;

	str[i] = '\0';
}
