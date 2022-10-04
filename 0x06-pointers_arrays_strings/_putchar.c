#include <unistd.h>

/**
<<<<<<< HEAD
 *  * _putchar - writes the character c to stdout
 *   *
 *    * @c: The character to print
 *     *
 *      * Return: On success 1.
 *       *
 *        * On error, -1 is returned, and errno is set appropriately.
 *         *
 *          */

int _putchar(char c)
{
		return (write(1, &c, 1));
=======
 * _putchar - writes the character c to stdout
 *
 * @c: The character to print
 *
 * Return: On success 1.
 *
 * On error, -1 is returned, and errno is set appropriately.
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
>>>>>>> da25cc3d9398b442088d1bff16e8938722d524cb
}
