#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head of linked list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
