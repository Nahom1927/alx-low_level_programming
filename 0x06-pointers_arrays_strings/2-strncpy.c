#include "main.h"

/**
 * _strncpy - a function that copies a string
 *
 * @dest: pointer
 * @src: pointer
 * @n: parameter
 *
 * Return: Character
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; n > i; i++)
	{
		dest[i] = '\0';
	}
	return (dest);

}
