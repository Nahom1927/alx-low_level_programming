#ifndef MAIN_H
#define MAIN_H

/**
<<<<<<< HEAD
 *  * File: holberton.h
 *   * Auth: Brennan D Baraban
 *    * Desc: Header file containing prototypes for all functions
 *     *       used in the 0x0A-malloc_free directory.
 *      */
=======
 * File: holberton.h
 * Auth: Brennan D Baraban
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x0A-malloc_free directory.
 */
>>>>>>> 158b46f60138d19a0b4f6361ca697ef6709d9aed

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif
