#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: the character to check.
 *
 * Description: The function checks if the provided character is lower case
 * It returns 1 if the character is lowercase and 0 otherwise
 * 
 * Return: 1 if c is lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return 1;
	}
	return 0;
}
