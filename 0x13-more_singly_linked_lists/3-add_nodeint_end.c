#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of a listint_t list
 * @head: A double pointer to the  first node of the linked_list
 * @n: integer to be added to the list
 * Return: the address of the new element or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* declare new_note as a pointer of type listint_t */
	listint_t *new_node, *temp;

	/* Allocate memory for a listint_t node */
	/* making new node point to the allocated memory */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL); /* Return NULL if memory allocation fails */
	/* when an int is assigned to a function */
	/* the function recieves a copy of the int */
	new_node->n = n;
	/* set the next pointer of the new_node to point to NULL */
	new_node->next = NULL;

	/*If the list is empty, make the new node the head */
	if (*head == NULL)
	{
		*head = new_node;
	} else
	{
		/* Traverse to the end of the list */
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		/* link the last node to the new node */
		temp->next = new_node;
	}

	return (new_node);
}
