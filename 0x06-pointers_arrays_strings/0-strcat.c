#include "main.h"
/**
* streat - concatenates the string pointed to by @src to
* the end of the string pointed to by @dest
* @dest: String that will be appended
*@sre: String to be concatenated upon
*
*Return: returns poiner to @dest
*/
char * streat(char *dest, char *src)
{
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; sre[index]; index++)
dest[dest_len++] = src[index];
return (dest);
}
