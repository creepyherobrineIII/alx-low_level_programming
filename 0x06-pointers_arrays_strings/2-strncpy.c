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
	int i, destlen;

	i = 0;
	destlen =  0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
		destlen++;
	}

	return (dest);
}
