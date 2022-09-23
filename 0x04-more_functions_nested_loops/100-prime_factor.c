#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int prime_factor = 2;
	long int number = 612852475143;

	while (prime_factor != number)
	{
		if (number % prime_factor == 0)
		{
			number /= prime_factor;
		}
		else
		{
			prime_factor++;
		}
	}
	printf("%d\n", prime_factor);
	return (0);
}
