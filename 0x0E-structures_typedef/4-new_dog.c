#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - calculate the length of a string
 * @str: string length
 *
 * Return: length of string
 */
size_t _strlen(const char *str)
{
	const char *s;

	for (s = str; *s; ++s)
	{
	}
	return (s - str);
}

/**
 * str_dup - duplicates a string using malloc
 * @str: string to be duplicated
 *
 * Return: the pointer to dest
 */

char *str_dup(const char *str)
{
	size_t len = _strlen(str) + 1;
	char *new_str = malloc(len);
	size_t i;

	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		new_str[i] = str[i];
	}
	return (new_str);
}

/**
 * new_dog - function creates a new dog
 * @name: the name of the new dog
 * @age: the age of the new dog
 * @owner: the owner of the dog
 *
 * Return: pointer to the address of the new dog, otherwise NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
	{
		return (NULL);
	}
	my_dog->name = str_dup(name);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->owner = str_dup(owner);
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	my_dog->age = age;
	return (my_dog);
}
