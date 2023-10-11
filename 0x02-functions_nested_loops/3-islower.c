#include "main.h"

/**
 * islower - checks for lowercase character.
 *
 * Description: The function will check for lower case character and 
 * return 1 if c is lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return 1;
	}
	return 0;
}
