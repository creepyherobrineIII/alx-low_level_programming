#include "main.h"


/**
 * _strcpy - copies string from one pointer to another
 *
 * @dest: destination pointer parameter
 *
 * @src: string to be coppied pointer parameter
 *
 * Return: the pointer to dest
 */


char *_strcpy(char *dest, char *src)
{
	int i;
	char r;

	i = 0;

	while (r != '\0')
	{
		r = *(src + i);
		*(dest + i) = r;
		i++;
	}
	return (dest);
}
