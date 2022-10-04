#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line
 *
 * @size: parameter
 *
 * Return: void
 */

void print_triangle(int size)
{
	int counter;
	int count_space;
	int count_size;

	if (size > 0)
	{
		for (counter = 1; counter <= size; counter++)
		{
			for (count_space = (size - counter); count_space > 0; count_space--)
			{
				_putchar(' ');
			}

			for (count_size = ((size - counter) + 1); count_size <= size; count_size++)
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
