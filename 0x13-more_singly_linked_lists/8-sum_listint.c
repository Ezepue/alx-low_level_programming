#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data in a listint_t list
 * @head: Pointer to the first node in the linked list
 *
 * Return: The resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
