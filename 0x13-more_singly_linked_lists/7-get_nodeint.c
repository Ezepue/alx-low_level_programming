#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_int linked list
 * @head: A pointer to the head of thr list
 * @index: Index of the node to retrieve
 *
 * Return: Pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (NULL);

}
