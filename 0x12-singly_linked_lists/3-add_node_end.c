#include "lists.h"

/**
 * add_node_end - adds a new node to the end of a list_t list
 * @head: A double pointer to the  first node of the linked_list
 * @str: string that need to be duplicated and added to the list
 * Return: the address of the new element or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	/* declare new_note as a pointer of type list_t */
	list_t *new_node;
	list_t *temp;

	/* Allocate memory for a list_t node */
	/* making new node point to the allocated memory */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL); /* Return NULL if memory allocation fails */
	/* Duplicate the string */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
	/* If strdup fails, free allocated memory and return NULL */
		return (NULL);
	}
	/* Set the length of the string */
	new_node->len = strlen(str);
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
