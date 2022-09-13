#include "main.h"

/**
 * _isalpha - Checks if char is in alphabet, lower and uppercase incl
 * @c: integer parameter for function
 *
 * Return: 1 (If char is in alphabet), 0 (If char isn't)
 */

int _isalpha(int c)
{
if (((c < 97) || (c > 122)) || ((c < 65) || (c > 90)))
{
return (0);
}
else
return (1);
}
