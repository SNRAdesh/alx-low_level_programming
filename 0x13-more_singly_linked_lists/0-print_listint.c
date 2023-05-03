#include "lists.h"
/**
 * print_listint - it printing all the elements of the list
 * @h: this is a pointer to a list
 * Return: it returns the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	unsigned int x;

	if (h == NULL)
		return (0);
	for (x = 0; h != NULL; x++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (x);
}
