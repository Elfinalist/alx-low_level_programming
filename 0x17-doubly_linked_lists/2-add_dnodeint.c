#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (*head == NULL)
	{
		newnode->next = NULL;
		newnode->prev = NULL;
	}

	else
	{
		newnode->next = *head;
		newnode->prev = NULL;
		(*head)->prev = newnode;
	}
	*head = newnode;
	return (newnode);
}
