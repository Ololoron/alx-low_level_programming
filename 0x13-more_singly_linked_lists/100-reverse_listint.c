#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the first element in the list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ant_temp = NULL;
	listint_t *next_temp = NULL;

	while (*head != NULL)
	{
		next_temp = (*head)->next;
		(*head)->next = ant_temp;
		ant_temp = *head;
		*head = next_temp;
	}

	*head = ant_temp;
	return (*head);
}
