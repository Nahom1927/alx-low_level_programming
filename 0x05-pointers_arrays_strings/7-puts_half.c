#include "main.h"
/**
 * puts_half - prints a string
 * @str: the string to print
 *
 * Return: void
*/

void puts_half(char *str)
{
int j = 0;
int k;
while (str[j] != '\0')
{
   j++;
}
   if (j % 2 == 1)
{
   k = (j - 1) / 2;
   k += 1;
}
  else
{  
   k = j /2;
}
for (; k < j; k++)
{
  _putchar(str[k]);
}
putchar('\n');
}
    

for (int i = (len + 1) / 2; str[i] != '\0'; i++)
{
	_putchar(str[i]);
}
_putchar('\n');
}
