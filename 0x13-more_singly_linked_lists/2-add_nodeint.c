#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: Value to be stored in thr new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL) /*Checks if memory allocation falied */
	{
		return (NULL);
	}

	newNode->n = n; /*Set the value of new node*/
	newNode->next = *head; /*Make the new mode point to rhe current head*/
	*head = newNode; /*Update the head to point to the new node*/

	return (newNode);
}
