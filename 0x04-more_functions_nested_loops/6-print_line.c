#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 *
 * @n: parameter
 *
 * Return: void
 */

void print_line(int n)
{
	int counter;

	for (counter = 1; counter <= n; counter++)
	{
		if (n > 0)
		{
			_putchar('_');
		}

		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
