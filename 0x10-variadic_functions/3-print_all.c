#include "variadic_functions.h"

/**
 * print_all - prints anything, based on the format
 * @format: A string representing the data types of the arguments.
 *
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str, format_char;

	va_start(args, format);

	while (format[i] != '\0')
	{
		format_char = format[i];
		if (format_char == 'c')
		{
			printf("%c", va_arg(args, int)); /* char is promoted to int */
		}
		else if (format_char == 'i')
		{
			printf("%d", va_arg(args, int));
		}
		else if (format_char == 'f')
		{
			printf("%f", va_arg(args, double)); /* float is promoted to double */
		}
		else if (format_char == 's')
		{
			str = va_arg(args, char *);
			printf("%s", str ? str : "(nil)");
			/*condition ? expression_if_true : expression_if_false. */
		}

		if (format[i + 1] != '\0')
		{
			printf(", ");
		}
	}
	va_end(args);
	printf("\n");
}

