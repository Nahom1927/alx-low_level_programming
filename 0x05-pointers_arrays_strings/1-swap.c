#include "main.h"
/**
 * swap_int - swap swaps values of two integers
 *
 * @a: An integers to swap
 * @b: Another integers to swap
 *
 * Return: void
*/

void swap_int(int *a, int *b)
{

int aux;

aux = *a;
*a = *b;
*b = aux;
}
