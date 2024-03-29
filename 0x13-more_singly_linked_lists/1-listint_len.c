#include <stdio.h>
#include "lists.h"

/**
  * listint_len - Counts the elements in a linked list
  * @h: The head of the linked list
  *
  * Return: The number of elements in a linked list
  */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}

