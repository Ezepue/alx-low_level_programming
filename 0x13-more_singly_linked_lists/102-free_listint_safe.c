#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: A pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	size_t size = 0;

	while (current != NULL)
	{
		listint_t *temp = current;
		current = current->next;
		free(temp);
		size++;

		if (current == NULL)
		{
			*h = NULL;
		}
		if (temp <= current)
		{
			break;
		}
	}

	return size;
}
