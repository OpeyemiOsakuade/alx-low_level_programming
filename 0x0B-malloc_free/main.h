#ifndef MALLOC_FREE_HEADER
#define MALLOC_FREE_HEADER

/* Writes a character. */
void _putchar(char c);

/* creates an array of chars, and initializes it with a specific char. */
char *create_array(unsigned int size, char c);

/*
 * returns a pointer to a newly allocated space in memeory that contains
 * a copy of the string given as a parameter
 */
char *_strdup(char *str);

/* returns length of string */
int _strlen(char *s)
#endif
