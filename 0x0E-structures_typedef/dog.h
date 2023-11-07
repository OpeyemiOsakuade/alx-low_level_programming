#ifndef DOG_H
#define DOG_H
/**
 * struct dog - basic description of a dog
 * @name: First element
 * @owner: Second element
 * @age: Third element
 *
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
