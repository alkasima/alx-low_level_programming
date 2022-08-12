#include "lists.h"

/**
 * print_list - prints all the elment of the list_t
 * @h: pointer of the list
 * Return: number of the nodes
 */
size_print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if(h->str)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		count++;
		h = h->next;
	}
	return (count);
}
