This text has been OCR'd by the free version of Textify on macOS.
You can remove this message manually or by purchasing the PRO version (via Textify > Preferences) which will help me improve the app. Thank you.
----------------------------------------------------------------------

#ifndef MAIN_H
#define MAIN H
#include <stdio.h>
/**
*void prototypes()
*int prototypes()
*char prototypes()
*/
void reverse_array(int *a, int n);
void print_number (int n);
void print_buffer (char *b, int size);
int _stremp (char *s1, char *s2);
char *_strcat (char *dest, char *src);
char *_strncat (char *dest, char *src, int n);
char *_strncpy (char *dest, char *src, int n);
char *string_toupper (char *);
char *cap_string (char *);
char *leet (char *);
char *rot13 (char *);
char *infinite_add(char *n1, char *n2, char *r,int size_r);
char *add_strings (char *n1, char *n2, char *r, int r_index);
#endif /*MAIN_H*/

