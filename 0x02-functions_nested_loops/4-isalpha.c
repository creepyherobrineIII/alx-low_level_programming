#include "main.h"

/**
 * _isalpha - Checks if letter is part of alphabet and returns relevant value
 *
 * @c: integer parameter
 *
 * Return: 0 (not part of alphabet); 1 (part of alphabet)
 */


int _isalpha(int c)
{
	int i;

	if ((c < 65) | (c > 90))
	{
		if (((c > 90) & (c < 97)) | (c > 122))
		{
			i = 0;
		} else
		{
			i = 1;
		}
	}

	return (i);
}
