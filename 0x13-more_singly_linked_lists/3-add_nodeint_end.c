#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - adds a new now node at the end
 * @head: double pointer to the node
 * @n: integer to the node
 * Return: address of new element,else NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *new, *add;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)

		*head = new;
	else
	{
		add = *head;
		while (add->next != NULL)
		add = add->next;
		add->next = new;
	}

	return (*head);
}
