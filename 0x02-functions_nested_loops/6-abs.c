#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @i: Integer parameter to be tested
 *
 * Return: Integer parameter
 */

int _abs(int i)
{
if (i < 0)
{
	i = i * (-1);
}
return (i);
}
