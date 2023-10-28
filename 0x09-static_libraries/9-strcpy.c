#include "main.h"

/**
 * _strcpy - copies the string, including the 
 * terminating null byte to the buffer pointed 
 * to by the dest
 * @src: pointer to the string to be copied
 * @dest: destination pointer
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
