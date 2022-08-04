#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - check the code
 * @n: The number of arguments
 * @separator: character separator of numbers
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int j;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(numbers, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(numbers, int));
		if (n == j + 1)
		{
			break;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
