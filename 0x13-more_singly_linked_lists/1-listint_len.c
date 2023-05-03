#include "lists.h"
/**
 * listint_len - calculating the length of a list
 * @h: this shows the pointer of the list
 * Return: it returns the amount of nodes
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
