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

	while (format != NULL && format[i] != '\0')
	{
		format_char = format[i];
		switch (format_char)
		{
			case 'c':
				printf("%c", va_arg(args, int)); /* char is promoted to int */
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double)); /* float is promoted to double */
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
		}
		if (format[i + 1] != '\0' && (format_char == 'c' || format_char == 'i' || format_char == 'f' || format_char == 's'))
		{
			printf(", ");
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
