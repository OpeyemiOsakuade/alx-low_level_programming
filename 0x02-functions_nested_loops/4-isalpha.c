#include "main.h"
/**
 *_isalpha - checks if a character ia alphabetic
 *@c: the character to check
 *
 * Description: This function checks if the provided character is an alphabetic
 * character, either lowercase or uppercase.
 *
 * Return: 1 if the character is alphabetic, 0 otherwise.
 */

int _isalpha(int c);
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
