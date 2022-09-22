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

	for (g = 0; g < n && src[g] != '\0'; g++)
	{
		dest[g] = src[g];
	}

	for ( ; g < n; g++)
	{
		dest[g] = '\0';
	}

	return (dest);
}
