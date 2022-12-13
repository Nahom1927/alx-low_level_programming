#include "main.h"

/**
 * _isdigit - a function that checks if a given character
 * is a digit
 *
 * @c: the given integer to be checked
 *
 * Return: 1 if it is a digit
 * 0 if it is otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
