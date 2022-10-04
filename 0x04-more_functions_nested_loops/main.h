#ifndef _MAIN_H_
#define _MAIN_H_


/**
 * _putchar - writes the character c to stdout
 *
 * @c: character to be checked
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);


/**
 * _isupper - a function that checks for uppercase character
 *
 * @c: character to be given
 *
 * Return: 1 if it is upper while 0 if it is otherwise
 */
int _isupper(int c);


/**
 * _isdigit - a function that checks for a digit (0 through 9)
 *
 * @c: character to be checked
 *
 * Return: 1 if it is digit or 0 if it is otherwise
 */
int _isdigit(int c);


/**
 * mul - a function that multiplies two integers
 *
 * @a: parameter
 * @b: parameter
 *
 * Return: Always 0 (Success)
 */
int mul(int a, int b);


/**
 * print_numbers - a function that prints the numbers, from 0 to 9,
 * followed by a new line
 *
 * Return: void
 */
void print_numbers(void);


/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 * followed by a new line
 *
 * Return: void
 */
void print_most_numbers(void);


/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void);


/**
 * print_line - a function that draws a straight line in the terminal
 *
 * @n: parameter
 *
 * Return: void
 */
void print_line(int n);


/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 *
 * @n: parameter
 *
 * Return: void
 */
void print_diagonal(int n);


/**
 * print_square - a function that prints a square, followed by a new line
 *
 * @size: parameter
 *
 * Return: void
 */
void print_square(int size);


/**
 * print_triangle - a function that prints a triangle
 * followed by a new line
 *
 * @size: parameter
 *
 * Return: void
 */
void print_triangle(int size);


/**
 * print_number - a function that prints an integer
 *
 * @n: parameter
 *
 * Return: void
 */
void print_number(int n);

#endif
