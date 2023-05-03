#include "lists.h"
/**
 * add_nodeint - adding node at beginning of the list
 * @head: a pointer to add to a node
 * @n: number to add to a node
 * Return: this trtutns a pointer to the head of the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;
	new->n = n;
	*head = new;

	return (*head);
}
