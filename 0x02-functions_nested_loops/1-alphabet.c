#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase.
 *
 * Description: The function willl loop through the lowercase alphabet
 * and print it, followed by a new line
 * The function utilizes the _putchar function
 * Return: Always 0
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
