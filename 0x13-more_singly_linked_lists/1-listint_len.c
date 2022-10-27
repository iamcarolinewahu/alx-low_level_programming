#include "lists.h"

/**
 * listint_len - returns no of elements in a linked list
 * @h: head of a list
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		H = H->NEXT;
		node++;
	}
	return (node);
}
