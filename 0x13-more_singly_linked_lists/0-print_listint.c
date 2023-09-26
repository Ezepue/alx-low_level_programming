#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n); /*print the current node value*/
		h = h->next; /*Move to the next node*/
		node++; /*Increment the node count*/
	}
	return (node); /*Return the no of node*/
}
