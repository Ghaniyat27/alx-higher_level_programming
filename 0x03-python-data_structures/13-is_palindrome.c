#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
*add_nodeint - Add's a New Node at The Beginning of a Listint_t List
*@head: Head of The Listint_t
*@n: int to be added in Listint_t list
*Return: Address of New Element's, or NULL if it Failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
/**
*is_palindrome - Identify If a Singly Linked List is Palindrome
*@head: Head of The Listint_t
*Return: 1 If It is Palindrome Else 0
*/
int is_palindrome(listint_t **head)
{
	listint_t *head2 = *head;
	listint_t *aux = NULL, *aux2 = NULL;

	if (*head == NULL || head2->next == NULL)
		return (1);
	while (head2 != NULL)
	{
		add_nodeint(&aux, head2->n);
		head2 = head2->next;
	}
	aux2 = aux;
	while (*head != NULL)
	{
		if ((*head)->n != aux2->n)
		{
			free_listint(aux);
			return (0);
		}
		*head = (*head)->next;
		aux2 = aux2->next;
	}
	free_listint(aux);
	return (1);
}
