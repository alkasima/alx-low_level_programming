#include "main.h"

/**
 * is_prime_number - Returns if a number is prime
 * @n: number to be checked for
 *
 * Return: Int value
 */

int check_prime(int n, int i);

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - Check if number is prime
 * @n: the number to be checked
 * @i: the iteration times
 *
 * Return: 1 for prime 0 for composite
 */

int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (check_prime(n, i + 1));
}
