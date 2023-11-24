#include "lists.h"

/**
 * list_len-returns the number of elements in a linked list_t list
 * @h: A constant pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++; /* Increment count for each node */
		h = h->next; /* Move to the next node */
	}

	return (count); /* Retun the total count */
}
