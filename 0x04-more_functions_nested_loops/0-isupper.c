#include "main.h"

/**
 * _isupper - Checks if parameter is an uppercase
 * @c: input character
 * Return: 1 if is an uppercase and 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
