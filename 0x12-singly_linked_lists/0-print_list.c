#include "lists.h"
/**
 * print_list - prints all the elements of the list_t list
 * @h: the pointer to the start of the list
 *
 * Return: the number of nodes, if str is NULL it returns [0] (nil)
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		/* if str member is Null*/
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
