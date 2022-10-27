#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning
 * of a list
 * @head: head of a list
 * @n: n element
 *
 * Return: address of the new element. NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
