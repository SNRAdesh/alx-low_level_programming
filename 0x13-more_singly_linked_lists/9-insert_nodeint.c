#include "lists.h"
listint_t *create_new_node(int n);
/**
 * insert_nodeint_at_index - inserting a node at a given index
 * @head: a pointer to the first element of the list
 * @idx: Index to insert a node at
 * @n: number to be inserted into the node
 * Return: it returns the address of the newly created node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *tmp;
	listint_t *tmp_old;
	listint_t *new;

	tmp = *head;
	if (head == NULL)
		return (NULL);
	new = create_new_node(n);
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	if (idx == 0)
		*head = new;
	for (x = 0; x < idx - 1 && tmp != NULL && idx != 0; x++)
		tmp = tmp->next;
	if (tmp == NULL)
		return (NULL);
	if (idx == 0)
		new->next = tmp;
	else
	{
		tmp_old = tmp->next;
		tmp->next = new;
		new->next = tmp_old;
	}
	return (new);
}

/**
 * create_new_node - Creating a new node
 * @n: Value to add to new node
 * Return: A pointer to a node
 */
listint_t *create_new_node(int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	return (new);
}
