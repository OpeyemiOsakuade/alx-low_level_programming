#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	struct dog mydog;

	init_dog(&mydog, "Poppy", 3.5, "Bob");
	printf("My name is %s, and I am %.1f :) - Woof!\n", mydog.name, mydog.age);
	return (0);
}
