#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void){

          char ch[8] = "_putchar";
                 int i = 0;
                 char c;
             
               while (i<=8){
                       c = ch[i];
                         _putchar(c);
                       i++;


     }
           _putchar('\n');
              return(0);


}
int _putchar(char c)
{
	return (write(1, &c, 1));
}
