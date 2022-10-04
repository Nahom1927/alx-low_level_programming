#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - a function that prints half of a string,
 * followed by a new line
 *
 * @str: pointer
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i;

	if (_strlen(str) % 2 == 0)
	{
		for (i = _strlen(str) / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = ((_strlen(str) - 1) / 2) + 1; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
