#include "lists.h"
/**
 * get_nodeint_at_index - returning the node at an index
 * @head: the pointer to the first element of the list
 * @index: Desired node at this position
 * Return: Pointer to the desired node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	for (x = 0; x < index ; x++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
