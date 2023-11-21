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

/* concatenates two strings */
char *str_concat(char *s1, char *s2);

/* returns pointer to a 2 dimensional */
int **alloc_grid(int width, int height);

/* free a 2-dim grid */
void free_grid(int **grid, int height);
#endif
