#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: Value to be stored in the new node
 *
 * Return: The address of the new element, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL; /* Ensure the new node points to NULL*/

	if (*head == NULL) /*if the list is empty make the newNode the head*/
	{
		*head = newNode;
	}
	else
	{
		listint_t *temp = *head;

		while (temp->next != NULL) /*Tranverse to the end of the list*/
		{
			temp = temp->next;
		}
		temp->next = newNode; /*Add the new node to the end of the list*/
	}
	return (newNode);
}
