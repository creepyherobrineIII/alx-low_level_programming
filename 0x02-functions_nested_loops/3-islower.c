#include "main.h"

/**
 * _islower - Checks if char is lowercase
 * @c: integer parameter for function
 *
 * Return: 1 (If char is lowercase), 0 (If char isn't)
 */

int _islower(int c)
{
if ((c < 97) || (c > 122))
{
return (0);
}
else
return (1);
}
