#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 *
 * @dest: pointer
 * @src: pointer
 * @n: parameter
 *
 * Return: character
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
