#include <stdio.h>
#include "main.h"

/**
 * _isupper - a function that checks if a given character
 * is upper case
 *
 * @c: the integer to be checked
 *
 * Return: 1 if it is upper case
 * 0 if it is not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
