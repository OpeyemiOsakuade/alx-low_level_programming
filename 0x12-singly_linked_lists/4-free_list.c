#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: pointer to the head of the list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		/* Temporarily store the current node */
		temp = head;
		/* move to the next node */
		head = head->next;

		/* free the string in the current node */
		free(temp->str);
		/* Free the current node */
		free(temp);
	}
}
