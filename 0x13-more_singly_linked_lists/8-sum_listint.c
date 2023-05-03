#include "lists.h"
/**
 * sum_listint - calculating the sum of the integers in a list
 * @head: a pointer to the first element of a list
 * Return: returns an integer representing the sum of values
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
