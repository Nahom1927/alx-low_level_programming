#include <stdio.h>
#include "main.h"
/**
 * main - print the name of the program
 * @argc: count arguments
 * @argv:vector containing command line arguments
 * Description: this program prints it's name to the screen
 * Return: Always 0 (success)
 */
int __attribute__((unused)) main(int argc, char *argv[])
{

(void)argc;
printf("%s\n", argv[0]);
return (0);
}
