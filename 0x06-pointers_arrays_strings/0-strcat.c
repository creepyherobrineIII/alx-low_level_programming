#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: destination string for appending
 * @src: string to append
 * Return: pointer to concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int c, g = 0;
	char temp;

	while (dest[c] != '\0')
	{
		c++;
	}

	while (src[g] != '\0')
	{
		g++;
	}

	if (n <= g)
	{
		for (int i = 0; i < n; i++)
		{
			temp = src[i];
			dest[c] = temp;
			c++;
		}
	}
	else
	{
		for (int r = 0; r < g; r++)
		{
			temp = src[r];
			dest[c] = temp;
			c++;
		}
	}
	return (dest);
