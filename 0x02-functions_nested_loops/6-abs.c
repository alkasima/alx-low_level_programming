#include "main.h"

/**
 * _abs - compute the absolute value of integer
 *
 * @i: integer taht is abosulute
 * Return: the absolute value of an integer
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
