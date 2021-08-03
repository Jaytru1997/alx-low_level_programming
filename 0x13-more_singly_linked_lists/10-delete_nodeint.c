#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 * @head: double pointer to head of list
 * @index: index of node to be deleted
 * Return: 1 if success, 1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *next;

	register uint i;

	if (!head || !(*head))
		return (FAILURE);
	current = *head;
	if (!index)
	{
		*head = current->next;
		free(current);
		return (SUCCESS);
	}
	for (i = 0; current && i < index - 1; i++)
		current = current->next;
	if (!current || !(current->next))
		return (FAILURE);
	next = current->next->next;
	free(current->next);
	current->next = next;
	return (SUCCESS);
}
