#include "main.h"
#include "2-strlen.c"

/**
 * rev_string -  a function that reverses a string
 *
 * @s: pointer
 *
 * Return: void
 */

void rev_string(char *s)
{
	char c;
	int i;

	for (i = 0; i < _strlen(s) / 2; i++)
	{
		c = s[i];
		s[i] = s[_strlen(s) - i - 1];
		s[_strlen(s) - i - 1] = c;
	}
}
