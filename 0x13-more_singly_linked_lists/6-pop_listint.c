#include "lists.h"
/**
 * pop_listint - deleting the first element of a list
 * @head: a pointer to the first node of the list
 * Return: The number inside the deleted node
 */
int pop_listint(listint_t **head)
{
	int x;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	x = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (x);
}
