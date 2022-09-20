#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: char type string
 * Return: integer converted
 */

int _atoi(char *s)
{
	int c = 0;
        unsigned int ni = 0;
        int min = 1;
        int isi = 0; 
        while (s[c])
        {
           if (s[c] > == 45)
           {
                min *= -1;
            }
        while (s[c] >= 48 && s[c] <= 57)
        {
           isi = 1;
           ni = (ni * 10) + (s[c] - '0');
           c++;
        }
         if (isi == 1)
        {
               break;
        }
        c++;
     }
    ni *= min;
    return(ni);
} 

	for (firstNum = 0; !(s[firstNum] >= 48 && s[firstNum] <= 57); firstNum++)
	{
		if (s[firstNum] == '-')
		{
			sign *= -1;
		}
	}

	for (int i = firstNum; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}

	return (sign * resp);
}
