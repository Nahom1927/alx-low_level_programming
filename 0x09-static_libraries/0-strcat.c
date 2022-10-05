#include "main.h"
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
>>>>>>> da25cc3d9398b442088d1bff16e8938722d524cb
}
