#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: A pointer to the first element in the linked list
 *
 * Return: the head node’s data (n) or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int nodeData;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	*head = (*head)->next;
	nodeData = (*head)->n;
	free(temp);
	return (nodeData);
}
