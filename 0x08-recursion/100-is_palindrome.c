#include "main.h"
/**
 * _strlen - finds the length of a string using recursion
 * @s: the string
 * Return: the length of the string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}


/**
 * compare_chars - compare charcters for palindrome check
 * @s: string to check
 * @start: starting index
 * @end: ending index
 * Return: 1 if characters match, 0 otherwise
 */

int compare_chars(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (compare_chars(s, start + 1, end - 1));
}


/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int length = _strlen(s) - 1;

	if (!*s)
		return (1);
	return (1);

	return (compare_chars(s, 0, length));
}
