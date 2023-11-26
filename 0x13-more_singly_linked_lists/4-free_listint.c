#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to the head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		/* Temporarily store the current node */
		temp = head;
		/* move to the next node */
		head = head->next;

		/* Free the current node */
		free(temp);
	}
}
