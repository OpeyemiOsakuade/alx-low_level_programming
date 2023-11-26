#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: A double pointer to the  first node of the linked_list
 * @str: string that need to be duplicated and added to the list
 *
 * Return: the address of the new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	/* declare new_note as a pointer of type list_t */
	/* list_t is a custom data type - struct */
	list_t *new_node;

	/**
	 * Allocate memory for a list_t node,
	 * making new node point to the allocated memory
	 */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL); /* Return NULL if memory allocation fails */
	new_node->str = strdup(str); /* Duplicate the string */
	if (new_node->str == NULL)
	{
		free(new_node); /* If strdup fails, free allocated memory and return NULL */
		return (NULL);
	}
	/* Set the length of the string */
	new_node->len = strlen(str);
	/**
	 * Link the new node to the current head of the list
	 * by setting the next pointer of the new_node to
	 * point to the current head of the list
	 */
	new_node->next = *head;
	*head = new_node; /* Make the new node the new head of the list */

	return (new_node);
}
