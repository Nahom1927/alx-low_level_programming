<<<<<<< HEAD
#include "main.h"

/**
 *  * _isupper - checks for uppercase character
 *   * @c: input character to be checked
 *    * Return: 1 if c is uppercase or 0 if otherwise
 *     */

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
=======
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
>>>>>>> da25cc3d9398b442088d1bff16e8938722d524cb
}
