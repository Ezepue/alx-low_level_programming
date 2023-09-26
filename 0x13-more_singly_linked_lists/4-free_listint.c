#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: A pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
