#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcat - a function that concatenates two strings
 *
 * @dest: pointer
 * @src: pointer
 *
 * Return: character
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		*(dest + (i + j)) = *(src + j);
	}
	dest[i + j] = '\0';
	return (dest);
}
