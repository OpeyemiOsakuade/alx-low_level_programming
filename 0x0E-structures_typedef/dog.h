#ifndef DOG_H
#define DOG_H

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog 
{
	char *name;
	char *owner;
	float age;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
size_t _strlen(const char *str);
char *str_dup(const char *str);
void free_dog(dog_t *d);
#endif
