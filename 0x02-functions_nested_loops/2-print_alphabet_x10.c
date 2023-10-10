#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times.
 *
 * Description: The function willl loop through the lowercase alphabet 
 * and print it 10 times, each is followed by a mew line
 * The function utilizes the _putchar function
 * 
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 10; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
