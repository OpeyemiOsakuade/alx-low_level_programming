#include "lists.h"
/**
 * print_listint - prints all the elements of the listint_t list
 * @h: the pointer to the head of the list
 *
 * Return: the number of nodes, if str is NULL it returns [0] (nil)
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		/* print the value of each node (h->n) and move to the next node*/
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
