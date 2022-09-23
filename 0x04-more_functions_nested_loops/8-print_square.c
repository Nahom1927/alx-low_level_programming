#include "main.h"

/**
 * print_square - a function that prints a sqaure
 *
 * @size: parameter
 *
 * Return: void
 */

void print_square(int size)
{
	int counter;
	int space_count;

	if (size > 0)
	{
		for (counter = 1; counter <= size; counter++)
		{
			for (space_count = 1; space_count <= size; space_count++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
