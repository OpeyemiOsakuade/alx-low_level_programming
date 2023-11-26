#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: A double pointer to the  first node of the linked_list
 * @n: int that need to be duplicated and added to the list
 *
 * Return: the address of the new element or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* declare new_note as a pointer of type listint_t */
	/* listint_t is a custom data type - struct */
	listint_t *new_node;

	/**
	 * Allocate memory for a listint_t node,
	 * making new node point to the allocated memory
	 */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL); /* Return NULL if memory allocation fails */
	new_node->n = n;
	new_node->next = *head;
	*head = new_node; /* Make the new node the new head of the list */

	return (new_node);
}
