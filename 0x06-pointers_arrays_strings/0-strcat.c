#include "main.h"

/**
 * _strcat - concatenates two strings together
 *
 * @dest: destination string for short string
 * @src: string to be concatenated
 *
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int destlen, srclen;

	srclen = 0;
	destlen = 0;

	while (*(dest + destlen) != '\0')
	{
		destlen++;
	}

	while (*(src + srclen) != '\0')
	{
		*(dest + destlen) = *(src + srclen);
		srclen++;
		destlen++;
	}

	*(dest + destlen) = '\0';

	return (dest);
}
