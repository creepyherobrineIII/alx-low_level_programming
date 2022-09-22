#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: destination string for appending
 * @src: string to append
 * Return: pointer to concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int c = 0;
	int l = 0;
	int g = 0;
	char temp;

	while (dest[c] != '\0')
	{
		c++;
	}

	while (src[l] != '\0')
	{
		l++;
	}

	while (g < l)
	{
		temp = src[g];
		dest[c] = temp;
		c++;
		g++;
	}
	dest[c] = '\0';

	return (dest);
}
