#include "lists.h"
/**
 * free_list - freeing a list
 * @head: head of the linked list.
 * Return:0 always
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
