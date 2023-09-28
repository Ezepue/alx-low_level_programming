#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head, *hare = head;

	while (tortoise != NULL && hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;       /* Move slow pointer by one step */
		hare = hare->next->next;         /* Move fast pointer by two steps */

		if (tortoise == hare)           /* If they meet, there's a loop */
		{
			tortoise = head;            /* Reset the slow pointer to the head */
			while (tortoise != hare)    /* Move both pointers one step at a time */
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (tortoise);            /* Return the starting node of the loop */
		}
	}

	return (NULL); /* If no loop is found */
}
