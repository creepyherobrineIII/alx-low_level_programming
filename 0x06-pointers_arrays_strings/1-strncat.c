#include "main.h"

/**
 * _strncat - concatenates two strings together, limting number of bytes used
 *
 * @dest: destination string for short string
 * @src: string to be concatenated
 * @n: integer determing number bytes used by src parameter
 *
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen, srclen, i;

	srclen = 0;
	destlen = 0;
	i = 0;

	while (*(dest + destlen) != '\0')
	{
		destlen++;
	}

	while (*(src + srclen) != '\0')
	{
		srclen++;
	}

	if (srclen >= n)
	{
		while (i < n)
		{
			*(dest + destlen) = *(src + i);
			destlen++;
			i++;
		}
	}

	if (srclen < n)
	{
		while (i < srclen)
		{
			*(dest + destlen) = *(src + i);
			destlen++;
			i++;
		}

		*(dest + destlen) = '\0';
	}

	return (dest);
}
