#include "main.h"

/**
 * _strncpy - copies at most n bytes of the string src to dest
 * @dest: destination buffer
 * @src: source setting
 * @n: number of bytes to be copied
 * Return: pointer to the destination buffer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}	
	return (dest);
}
