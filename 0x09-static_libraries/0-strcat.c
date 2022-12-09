#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

/**
<<<<<<< HEAD
 *  * *_strcat - a function that concatenates two strings
 *   *
 *    * @dest: pointer
 *     * @src: pointer
 *      *
 *       * Return: character
 *        */

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
=======
 * *_strcat - a function that concatenates two strings
 *
 * @dest: pointer
 * @src: pointer
 *
 * Return: character
=======

/**
 *_strcat - concatenates  the string pointed to by @src to
 * the end of the string pointed to by @dest
 *@dest: String that will be appended
 *@src: String to be concatenated upon
 *
 * Return: returns poiner to @dest
>>>>>>> 158b46f60138d19a0b4f6361ca697ef6709d9aed
 */

char *_strcat(char *dest, char *src)
{
<<<<<<< HEAD
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
>>>>>>> da25cc3d9398b442088d1bff16e8938722d524cb
=======

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
>>>>>>> 158b46f60138d19a0b4f6361ca697ef6709d9aed
}
