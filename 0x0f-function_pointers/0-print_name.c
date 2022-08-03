#include "function_pointers.h"

/**
 * print_name - Prints name
 * @name: Name to prints
 * @f: Pointer to the function
 *
 * Return: none
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
