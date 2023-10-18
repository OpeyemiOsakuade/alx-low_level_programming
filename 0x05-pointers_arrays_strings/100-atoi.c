#include "main.h"

/**
 * _atoi - converts a string into an integer
 * @s: pointer to the string to be converted
 */

int _atoi(char *s)
{
	int i = 0, result = 0, sign = 1, started = 0;

	while (s[i])
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if (started)
			break;

		i++;
	}

	return result * sign;
}
