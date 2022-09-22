#include "main.h"

/**
 * _strncpy - copies n bites of string onto another
 * @dest: desstination string
 * @src: string to be manipulated
 * @n: number of bytes to be copied
 * Return: Char pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int g = 0;
	char temp;

	while (g < n)
	{
		temp = src[g];
		dest[g] = temp;
		g++;
	}

	if (src[g] == '\0')
	{
		dest[g] = '\0'
	}

	return (dest);
}
