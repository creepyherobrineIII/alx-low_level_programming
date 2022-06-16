#include "main.h"

/**
 * _strncpy - Copies string to destination
 *
 * @dest: destination string parameter
 * @src: string to be copied parameter
 * @n: number of bytes to be used in copying
 *
 * Return: 0;
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while ((i < n) && (*(dest + destlen) != '\0'))
	{
		*(dest + i) = *(src + i);
	}

	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}

	return (dest);
}
