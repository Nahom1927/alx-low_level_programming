#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: input character to be checked
 * Return: 1 if c is uppercase or 0 if otherwise
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
