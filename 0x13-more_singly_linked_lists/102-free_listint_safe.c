#include <stddef.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: A pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *temp;
	size_t size = 0;

	if (h == NULL || *h == NULL)
		return (0);

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
		size++;

		/* Check if we're in a loop */
		if (temp <= current)
		{
			*h = NULL;
			break;
		}
	}

	return (size);
}
