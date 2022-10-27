#include "lists.h"

/**
 * free_listint2 - free a linked list
 * @head: head of a list
 *
 * Return: no return
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *new;

	if (head != NULL)
	{
		new = *head;
		while ((temp = new) != NULL)
		{
			new = new->next;
			free(temp);
		}
		*head = NULL;
	}
}
