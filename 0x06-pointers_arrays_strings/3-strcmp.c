#include "main.h"

/**
 * _strcmp - compares first char of string
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: 0 (Equal strings), -int(s1 < s2), +int(s1 > s2)
 */

int _strcmp(char *s1, char *s2)
{
	int ret;

	if (s1[0] == s2[0])
	{
		ret = 0;
	}
	else
		ret = s1[0] - s2[0];

	return (ret);
}
