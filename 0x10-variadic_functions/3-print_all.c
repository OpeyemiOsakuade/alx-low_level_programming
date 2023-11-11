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
	char *str, *sep = "";

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
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
				printf("%s%s", sep, str);
				break;
		}
		if (format[i + 1] != '\0')
		{
			printf(", ");
		}
		sep = ",";
		i++;
	}
	va_end(args);
	printf("\n");
}
